class Solution {
public:
    int smallestNumber(int n, int t) {
        int smallest = 0 ;
        for(int i = n; i<= 100; i++){
            int temp = i;
            int prod = 1;

            while(temp > 0){
                int digit = temp % 10;
                prod *= digit;

                temp = temp / 10;
            }
            if(prod % t == 0){
                return i;
                break;
            }
        }
        return -1;
    }
};