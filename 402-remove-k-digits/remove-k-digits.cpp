class Solution {
public:
    string removeKdigits(string num, int k) {
         
        stack<char> st;

        for(int i = 0; i < num.size(); i++){

            char digit = num[i];     // current digit

            // pop last digit when smaller digit come
            while(!st.empty() && k > 0 && st.top() > digit){
                st.pop();
                k = k -1;
            }
            st.push(digit);
        }

        // if still k > 0 , pop last digit until k > 0
        while(!st.empty() && k > 0){
            st.pop();
            k--;
        }

        // edge case
        if(st.empty()){
            return "0";
        }

        string res = "";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }

        while(res.size() > 0 && res.back() == '0'){
            res.pop_back();
        }

        reverse(res.begin(), res.end());

        if(res.empty()) return "0";

        return res;


    }
};