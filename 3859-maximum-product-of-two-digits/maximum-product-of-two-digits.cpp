class Solution {
public:
    int maxProduct(int n) {
        int istMax = INT_MIN;
        int secMax = INT_MIN;

        while(n > 0){
            int digit = n % 10;

            if(digit > istMax){
                secMax = istMax;
                istMax = digit;
            }
            else if(digit > secMax){
                secMax = digit;
            }

            n /= 10;
        }
        return istMax * secMax;
    }
};