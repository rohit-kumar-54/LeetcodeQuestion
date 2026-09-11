class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        int cnt = 0;
        int n = digits.size();
        unordered_set<int> st;

        for(int i=0; i < n; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++){
                    if(i == j || i == k || j == k){
                        continue;
                    }

                    int number = digits[i] * 100 + digits[j] * 10 + digits[k] * 1;
                    if( number >= 100 && number % 2 == 0){
                        st.insert(number);
                    }
                }
            }
        }
        vector<int> result(st.begin(), st.end());

        return result.size();
    }
};