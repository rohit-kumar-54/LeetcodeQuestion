class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int first_ele = nums[0];
        int last_ele = nums[nums.size()-1];

        int ans = min(first_ele, last_ele);
        while(ans > 0 ){
            if(first_ele % ans == 0 && last_ele % ans == 0){
                break;
            }
            ans--;
        }
        return ans;
    }
};