class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

    //  Approach : using two pointer and sliding windows
    //  T.C = O(2 * n)   and S.C = 0;    
        int n = nums.size();
        int left = 0, right = 0;
        int cnt = 0;
        
        int windowSum = 0;
        int countZeros = 0;

        while(right < n){
            windowSum += nums[right];
            
            while(left < right && (nums[left] == 0 ||  windowSum > goal)){

                if(nums[left] == 0){
                    countZeros++;
                }
                else{
                    countZeros = 0;
                }

                windowSum = windowSum - nums[left];
                left++;
            }
            if(windowSum == goal){
                cnt = cnt + 1;
                cnt = cnt + countZeros;
            }

            right++;
        }
        
        return cnt;


    // Better approach -> using map and prefSum and use freq of pref_sum - goal
    // Approach: (1)- initialize a map to store freq of prefSum seen so far
    // (2)--initialize variables for curr prefSum[0] = 1 and cnt =0 , currSum = 0;
    // (3) -- iterate array 
    //          -- at each step , update the currSum += nums[i];
    //          -- check (prefSum - currSUm) exist in map , if yes add freq of that ele in cnt
    // update the prefSUm and 
    // last return cnt;

        // int n = nums.size();
        // // hashmap to store prefSum and their frequency 
        // map<int, int> prefSum;
        // int currSum = 0;
        // int cnt = 0;
        // prefSum[0] = 1;

        // for(int num : nums){
        //     currSum += num;
        //     int remSum = currSum - goal;

        //     if(prefSum.find(remSum) != prefSum.end()){
        //         cnt = cnt + prefSum[remSum];
        //     }
        //     prefSum[currSum]++;
        // }
        // return cnt;


   

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