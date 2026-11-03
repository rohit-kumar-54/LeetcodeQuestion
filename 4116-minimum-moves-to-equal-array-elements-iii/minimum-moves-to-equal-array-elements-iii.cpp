class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();

        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            maxi = max(maxi, nums[i]);
        }

        int minMoves = 0;
        for(int i=0; i<n; i++){
            minMoves += maxi - nums[i];
        }
        return minMoves;
    }
};