class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();

        int openBr = 0 ;
        int maxBr = 0;

        for(int i=0; i < s.size(); i++){
            if( s[i] == '(') openBr++;
            if( s[i] == ')' ) openBr--;

            maxBr = max(maxBr, openBr);
        }
        return maxBr;
    }
};