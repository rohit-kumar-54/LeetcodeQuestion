class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> prefMax(n);

        prefMax[0] = nums[0];

        for(int i=1; i<n; i++){
            prefMax[i] = max(nums[i], prefMax[i-1]);
        }

        vector<int>sufMin(n);

        sufMin[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            sufMin[i] = min(nums[i], sufMin[i+1]);
        } 

        for(int i=0; i<n; i++){
            int instability = prefMax[i] - sufMin[i];

            if(instability <= k){
                return i;
            }
        }
        return -1;
    }
};