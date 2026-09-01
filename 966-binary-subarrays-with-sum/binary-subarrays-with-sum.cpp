class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {


    // Better approach -> using map and prefSum and use freq of pref_sum - goal

        int n = nums.size();
        // hashmap to store prefSum and their frequency 
        map<int, int> prefSum;
        int currSum = 0;
        int cnt = 0;
        prefSum[0] = 1;

        for(int num : nums){
            currSum += num;
            int remSum = currSum - goal;

            if(prefSum.find(remSum) != prefSum.end()){
                cnt = cnt + prefSum[remSum];
            }
            prefSum[currSum]++;
        }
        return cnt;


    // // Better Approach : T.C = O()   and S.C = 0;    
    //     int n = nums.size();
    //     int left = 0, right = 0;
    //     int cnt = 0;
        
    //     int sum = 0;
    //     while(right < n){
    //         sum += nums[right];

    //         if(sum ==  goal){
    //             cnt++;
    //         }
            
    //         while(sum > goal){
    //             sum = sum - nums[left];
    //             left++;
    //         }

    //         right++;
    //     }
        
    //     return cnt;

    // Brute force : T.C = O(n * n) and S.C = O(1) 
    // using two for loop and check every subarray sum , if equal count increases
    //     int n = nums.size();
    //     int cnt = 0;
    //     for(int i=0; i<n; i++){
    //         int sum = 0;
    //         for(int j=i; j<n; j++){
    //             sum += nums[j];
    //             if(sum == goal){
    //                 cnt++;
    //             }
    //         }
    //     }
    //     return cnt;
    }

};