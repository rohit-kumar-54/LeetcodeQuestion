class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

    // Using Two pointer and Sliding window

        int n = nums.size();
        int left = 0, right = 0, minLen = INT_MAX;

        long long sum = 0;

        while(right < n){
            sum += nums[right];


            while(sum >= target){
                int len = right - left + 1;
                minLen = min(len, minLen);

                sum -=  nums[left];
                left++;  
            }
            right++;
        }
        
        if(minLen == INT_MAX) return 0;
        return minLen;



    //  Brute force :  T.C = O(n * n) and S.C = O(1)   
        
        // int n = nums.size();
        // int minLen = INT_MAX;

        // for(int i = 0; i < n; i++){
        //     int sum = 0;
        //     for(int j = i; j<n; j++){
        //         sum += nums[j];

        //         int len = j - i + 1;
        //         if(sum >= target){
        //             minLen = min(minLen, len);
        //         }
        //     }
        // }
        // if(minLen == INT_MAX) return 0;
        // return minLen;
    }
};