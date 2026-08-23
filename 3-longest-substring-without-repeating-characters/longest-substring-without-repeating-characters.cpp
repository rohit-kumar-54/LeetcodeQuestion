class Solution {
public:
    int lengthOfLongestSubstring(string s) {


    // Optimal Approach : Using two pointer approach and Sliding window

        int hash[256] ;
        for(int i=0; i<256; i++){
            hash[i] = {-1};
        }
        int n = s.size();
        int l = 0, r = 0, maxLen = 0;

        while(r < n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= l){
                    l = hash[s[r]] + 1;
                }
            }
            int len = r - l + 1;
            maxLen = max(maxLen, len);

            hash[s[r]] = r;
            r++;
        }
        return maxLen;
        

    // Brute force -> O(n * n) and S.C = O(256)
        // int maxLen = 0;

        // for(int i=0; i < s.length(); i++){
        //     int hash[256] = {0};
            

        //     for(int j=i; j<s.length(); j++){
        //         if(hash[s[j]] == 1) break;

        //         int len = j - i + 1;

        //         maxLen = max(maxLen, len);
        //         hash[s[j]] = 1;
        //     }
        // }
        // return maxLen;
    }
};