class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            int digCnt = 0;
            while( nums[i] > 0){
                int digit = nums[i] % 10;
                digCnt++;
                nums[i] /= 10;
            }
            if(digCnt % 2 == 0){
                ans++;
            }

            digCnt = 0;
            
        }
        return ans;
        
    }
};