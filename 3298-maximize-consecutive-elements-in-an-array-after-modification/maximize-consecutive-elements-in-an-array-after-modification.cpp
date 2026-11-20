
class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> dp;
        int ans = 0;

        for (int x : nums) {

            // Save previous DP values
            int notModified = dp[x - 1];
            int modified = dp[x];

            // Case 1: Keep x unchanged
            dp[x] = max(dp[x], notModified + 1);

            // Case 2: Increase x by 1
            dp[x + 1] = max(dp[x + 1], modified + 1);

            ans = max({ans, dp[x], dp[x + 1]});
        }

        return ans;
    }
};
