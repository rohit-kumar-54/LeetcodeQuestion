class Solution {
public:
    // bool matching(char a , char b){
    //     return ( ( a == '(' && b == ')' ) ||
    //              ( a == '{' && b == '}' ) ||
    //              (a == '[' && b == ']' ) );
    // }
    bool isValid(string s) {

        int n = s.size();
        stack <char> st;
        for(int i=0; i<n; i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{' )
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty()) {
                    return false;
                }
                char ch = st.top();
                st.pop();
                if(s[i] == ')' && ch == '(' || s[i] == ']' && ch == '[' || s[i] == '}' && ch == '{'){
                    continue;
                }
                else{
                    return false;
                }
                
            }
        }
        return st.empty();




        // stack<char> st;
        // for(char ch : s){
        //     if ( ch == '(' || ch == '{' || ch == '[' ){
        //         st.push(ch);
        //     }
        //     else{
        //         if(st.empty() == true) { return false; }
        //         if(matching (st.top() , ch ) == false) { return false;}
        //         else {
        //             st.pop();
        //         }
        //     }
        // }
        // return (st.empty() == true);
    }
};