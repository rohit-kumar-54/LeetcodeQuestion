class Solution {
public:
    long long countCommas(long long n) {
        
        // if(n < 1000) return 0;

        // long long result = 0;
        // long long lower = 1000;
        // long long comma = 1;

        // while(lower <= n){
        //     long long upper = lower * 1000 - 1;
        //     if(upper > n) upper = n;

        //     long long totalNumsCnt = (upper - lower) + 1;
        //     result += (totalNumsCnt * comma);

        //     lower = lower * 1000;
        //     comma += 1;
        // }
        // return result;


        long long start = 1000;
        long long count = 0;

        while(start <= n){
            count += (n - start + 1);
            start = start * 1000;
        }
        return count;
    }
};