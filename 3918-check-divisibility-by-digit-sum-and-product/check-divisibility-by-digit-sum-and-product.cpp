class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int ds = 0;
        int dp = 1;
        while(temp != 0){
            int dig = temp % 10;

            ds += dig;
            dp *= dig;

            temp = temp / 10; 
        }
        int sum = ds + dp;

        if(n % sum == 0) return true;
        return false;
    }
};