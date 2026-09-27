class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;
        // int mid = st + (end-st)/2;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(nums[mid] == target){
                return mid;
            }

            if(nums[st] <= nums[mid]){    // check first half is sorted or not
                if(nums[st] <= target  && target <= nums[mid]){
                    end = mid - 1;   // left search
                }
                else{
                    st = mid + 1;
                }
            }
            else{  // check right half is sorted or not
                if(nums[mid] <= target && target <= nums[end]){
                    st = mid + 1; // right search
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};