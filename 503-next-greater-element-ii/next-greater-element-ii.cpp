class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {


    // Optimal approach -> O(4 * n)  and O(2 * n)
        // int n = nums.size();

        // vector<int> ans(n);
        // stack<int> st;

        // for(int i = 2*n - 1; i >= 0; i--){
        //     while(!st.empty() && st.top() <= nums[i % n]){
        //         st.pop();
        //     }
        //     if(i < n){
        //         if(st.empty()){
        //             ans[i] = -1;
        //         }
        //         else{
        //             ans[i] = st.top();
        //         }
        //     }
        //     st.push(nums[i % n]);
        // }
        // return ans;


        int n = nums.size();
        vector<int> ans(n, -1);

        for(int i = 0; i < n; i++){
            for(int j = i+1 ; j <= i + n - 1;  j++){
                int idx = j % n;

                if(nums[idx] > nums[i]){
                    ans[i] = nums[idx];
                    break;
                }
            }
        }
        return ans;
    }
};