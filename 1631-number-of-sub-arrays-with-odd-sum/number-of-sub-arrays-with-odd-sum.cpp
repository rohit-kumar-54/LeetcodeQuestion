class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

        int n = arr.size();
        int MOD = 1000000007;

        int prefSum = 0;

        int prefEvenSum = 1; // because 0 is already even
        int prefOddSum = 0; // no prev sum is odd

        int cnt = 0;

        for(int i=0; i<n; i++){
            prefSum += arr[i];

            if(prefSum % 2 == 0){
                cnt = (cnt + prefOddSum) % MOD;
                prefEvenSum++;
            }
            else{
                cnt = (cnt + prefEvenSum) % MOD;
                prefOddSum++;
            }
        } 
        return cnt;
        






    // M - 1 => Brute force O(n*n) and TLE error 
        // int n = arr.size();
        // int cnt = 0 ;
        // long long MOD = 1000000007;

        // for(int i=0; i<n; i++){
        //     long long sum = 0;
        //     for(int j=i; j<n; j++){
        //         sum += arr[j];
        //         sum = sum % MOD;
        //         if(sum % 2 != 0)cnt++;
        //     }
        // }
        // return cnt;
    }
};