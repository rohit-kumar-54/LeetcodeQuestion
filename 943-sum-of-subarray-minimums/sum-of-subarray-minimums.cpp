class Solution {
public:
    // Function to find the indices of next smaller element
    vector<int>findNSE(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n);
        stack<int>st;

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : n;
            st.push(i);
        }
        return ans;
    }

    // Function to find the indices of previous smaller or equal element
    vector<int>findPSEE(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n);
        stack<int>st;

        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : -1;
            st.push(i);
        }
        return ans;
    }



    int sumSubarrayMins(vector<int>& arr) {
        
        int n = arr.size();
        
        vector<int>nse = findNSE(arr);
        vector<int>psee = findPSEE(arr);

        int mod = 1e9+7;
        int sum = 0;

        for(int i=0; i<n; i++){
            int left = i - psee[i];
            int right = nse[i] - i;
            long long freq = left * right * 1LL;
            int val = (freq * arr[i] * 1LL)% mod;
            sum = (sum + val) % mod;
        }
        return sum;
        
















        // // Brute force
        // int n = arr.size();
        // int sum = 0;
        // int mod = 1e9 + 7;

        // for(int i=0; i<n; i++){
        //     int mini = arr[i];
        //     for(int j=i; j<n; j++){
        //         mini = min(mini, arr[j]);
        //         // sum += mini;
        //         sum = (sum + mini) % mod;
        //     }
            
        // }
        // // return sum % mod;
        // return sum;
    }
};