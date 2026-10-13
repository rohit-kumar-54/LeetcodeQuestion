class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

    // Brute force T.c = O(n * logn)
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] < 0){
                nums[i] = -1 * nums[i];
            }             
        }
        sort(nums.begin(), nums.end());
        long long minHalfSum = 0, maxHalfSum = 0;

        for(int i=0; i< n/2; i++)
            minHalfSum += nums[i] * nums[i];

        for(int i=n/2; i< n; i++)
            maxHalfSum += nums[i] * nums[i];

        return abs(maxHalfSum - minHalfSum);

    }
};