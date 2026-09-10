class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        // using sliding window 
        if(k <= 1) return 0;  // b/c 

        int left = 0;
        int count = 0;
        int prod = 1;

        for(int right = 0; right < nums.size(); right++){
            prod *= nums[right];

            while(prod >= k){
                prod /=  nums[left];    // divide because product ko kam karna hai
                left++;
            }
            int windowLength = right - left + 1;
            count += windowLength;
        }
        return count;

    // // brete force - O(n * n) and O(1)
            // base case
        // if (k <= 1) return 0;
        // int n = nums.size();
        // int cnt =0;
        // for(int i=0; i < n; i++){
        //     long long prod = 1;
        //     for(int j = i  ; j < n; j++){
        //         prod *= nums[j];

        //         if(prod < k) cnt++;

        //         else break;
        //     }
        // }
        // return cnt;
    }
};