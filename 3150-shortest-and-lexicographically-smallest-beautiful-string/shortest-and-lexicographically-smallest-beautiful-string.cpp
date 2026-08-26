class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        int n = s.length();
        string ans = "";

        for(int i=0; i<n; i++){
            int onesCnt = 0;
            string cur = "";

            for(int j=i; j<n; j++){
                cur += s[j];

                if(s[j] == '1') onesCnt++;

                if(onesCnt > k) break;

                if(onesCnt == k){
                    if(ans == "" || cur.size() < ans.size() || (cur.size() == ans.size() && cur < ans)){
                        ans = cur;
                    }
                }
            }
        }
        return ans;



    }
};