class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        unordered_set<int> number(nums.begin(), nums.end());

        int ans = k;

        while(number.contains(ans)){
            ans = ans + k;
        }
        return ans;
    }
};