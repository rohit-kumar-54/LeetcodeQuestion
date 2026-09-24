class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();

        int idx = -1;
        
        for(int i=0; i<n; i++){
            int temp = nums[i];
            int sum = 0;
            while(temp != 0){
                int rem = temp % 10;
                sum = sum  + rem;
                temp /= 10;
            }
            if(sum == i){
                idx = i;
                break;
            }
        }
        return idx;
    }
};