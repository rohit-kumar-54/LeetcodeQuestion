class Solution {
public:
    int minMoves2(vector<int>& nums) {
        // step (1) -- sort ele
        sort(nums.begin(), nums.end());

        int n = nums.size();

        // Now we have to find median of all element to make all element equal to median
        // step 2-- find median ele
        int medianEle = nums[n/2];

        // step 3 -- count number of moves
        int cntMoves = 0;
        for(int i=0; i<n; i++){
            cntMoves += abs(nums[i] - medianEle);
        }
        return cntMoves;


    }
};