class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

    // Method :2 => Using two pointer and 
        int n = nums.size();
        int maxLength = 0;
        int left = 0, right = 0;
        int zerosCnt = 0;
        while( right < n){
            if(nums[right] == 0) zerosCnt++;

            while(zerosCnt > k){
                if(nums[left] == 0){
                    zerosCnt--;
                }
                left++;
            }
            if(zerosCnt <= k){
                int len = right - left + 1;
                maxLength = max(maxLength, len);
            }
            right++;
        }
        return maxLength;

















    // Method : 1
    // Brute force : T.C = O(n * n) and S.C = O(1)
    // Intuition : find maxLength of subarray in which no of zeros == K    
        // int maxLen = 0;
        // for(int i=0; i<nums.size(); i++){
        //     int zerosCnt = 0;
        //     for(int j=i; j<nums.size(); j++){
        //         if(nums[j] == 0){
        //             zerosCnt++;
        //         }
        //         if(zerosCnt <= k){
        //             int len = j - i + 1;
        //             maxLen = max(maxLen, len);
        //         }
        //         else{ // zeroCnt > k
        //             break;
        //         }
        //     }
        // }
        // return maxLen;
    }
};