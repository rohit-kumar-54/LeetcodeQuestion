class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        int n = arrival.size();

        // Set of available servers to find next available servers using binary search
        set<int> availServers;

        // Min-heap to track servers occupied with requests in decreasing order of end time
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> busyServers;
       
        // requests handled by each server
        vector<int> serverRequests(k, 0);

        // Every server is available at the start
        for(int server = 0; server < k; server++) {
            availServers.insert(server);
        }

        for(int i = 0; i < n; i++) {
            
            // Make servers available which are done with the work before arrival of this request
            while(!busyServers.empty() && busyServers.top().first <= arrival[i]) {
                availServers.insert(busyServers.top().second);
                busyServers.pop();
            }

            // Drop requests If there are no available servers
            if(availServers.size() == 0) {
                continue;
            }

            // Find Available server according to alogithm specified in the statement
            auto nextAvailServerIter = availServers.lower_bound(i % k); 
            if(nextAvailServerIter == availServers.end()) {
                nextAvailServerIter = availServers.lower_bound(0);
            }

            // Increment requests handled by server, remove from available Servers
            // & Add to busyServers min Heap for tracking
            int nextServerInd = *nextAvailServerIter;
            serverRequests[ nextServerInd ]++;
            availServers.erase(nextAvailServerIter);
            busyServers.push({ arrival[i] + load[i], nextServerInd });
        }

        // Find Most amount of requests handled by single server
        int mxReq = ranges::max(serverRequests);

        // Find number of servers that handled most requests
        vector<int> busiestServers;
        for(int i = 0; i < k; i++) {
            if(serverRequests[i] == mxReq) {
                busiestServers.push_back(i);
            }
        }

        return busiestServers;
    }
};