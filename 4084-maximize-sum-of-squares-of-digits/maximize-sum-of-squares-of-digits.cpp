class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
        if ( sum > num * 9) return "";

        int noOfNines = sum / 9;
        int remDigit = sum % 9;

        string result(noOfNines, '9');

        if ( remDigit > 0){
            result.push_back(remDigit + '0');
        }
        // else
        result.append(num - result.length(), '0');

        return result;
    }
};