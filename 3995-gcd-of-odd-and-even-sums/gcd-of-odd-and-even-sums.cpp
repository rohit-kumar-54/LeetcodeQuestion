class Solution {
public:
    int gcd(int num){
        int evenSum = (num * (num + 1));
        int oddSum = num * num;

        return __gcd(evenSum, oddSum);
    }
    int gcdOfOddEvenSums(int n) {
        int ans = gcd(n);

        return ans;
    }
};