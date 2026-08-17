class Solution {
public:

    long long subArrayRanges(vector<int>& nums) {

        


    // Brute force Approach
        int n = nums.size();
        long long total_sum  = 0;
        for(int i = 0; i < n; i++){
            int mini = INT_MAX;
            int maxi = INT_MIN;

            for(int j = i; j<n; j++ ){
                mini = min(mini, nums[j] );
                maxi = max(maxi, nums[j]);

                long long diff = maxi - mini;
                total_sum += diff;
            }
        }
        return total_sum;
    }
};