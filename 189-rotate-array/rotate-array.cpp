class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());





















        // int n = nums.size();
        // k = k % n;
        // k = n - k;
        // vector<int>temp(k);
        // for(int i=0; i < k; i++){
        //     temp[i] = nums[i];
        // }
        // for(int i = k; i<n; i++){
        //     nums[i-k] = nums[i];
        // }
        // for(int i=0; i<k;i++){
        //     nums[n-k+i] = temp[i];
        // }
        
    }
};