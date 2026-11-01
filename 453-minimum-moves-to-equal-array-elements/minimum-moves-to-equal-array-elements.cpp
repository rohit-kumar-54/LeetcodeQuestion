class Solution {
public:
    int minMoves(vector<int>& nums) {

        int minMoves = 0;
        int minEle = INT_MAX;

        for(int i=0; i<nums.size();i++){
            minEle = min(minEle, nums[i]);
        }

        for(int i=0; i<nums.size();i++){
            
            minMoves += nums[i] - minEle;
        }
        return minMoves;
    }
};