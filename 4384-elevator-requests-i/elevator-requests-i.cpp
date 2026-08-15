class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int totalTime = requests[0];

        for(int i=0; i<requests.size()-1; i++){
            int diff = abs (requests[i] - requests[i+1]) ;

            totalTime += diff;
        }
        return totalTime;
    }
};