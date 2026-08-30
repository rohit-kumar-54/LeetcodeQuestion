class Solution {
public:
    int characterReplacement(string s, int k) {

    // Optimal approach : T.C = O(n) and S.C = O(26)

        int n = s.size();
        int l = 0, r = 0, maxLen = 0, maxFreq = 0;
        vector<int> freq(26, 0);

        while(r < n){
            freq[s[r] - 'A']++;

            maxFreq = max(maxFreq, freq[s[r] - 'A']);

            int windowLen = r - l + 1;
            if(windowLen - maxFreq > k){
                freq[s[l] - 'A']--;
                maxFreq = 0;
                l++;
            }

            if(windowLen - maxFreq <= k){
                maxLen = max(maxLen, windowLen);
            }
            r++;
        }  
        return maxLen;







    

        // Method - 01 -> Brute force T.C = O(n * n) and , S.C = O(26)
        // int n = s.size();
        // int maxLen = 0;
        // for(int i=0; i<n; i++){
        //     vector<int> freq(26, 0);
        //     int maxFreq = 0;

        //     for(int j=i; j<n; j++){
        //         freq[s[j] - 'A']++;

        //         maxFreq = max(maxFreq, freq[s[j] - 'A']);
        //         int windowLen = j - i + 1;
        //         int maxReplace = windowLen - maxFreq;

        //         if(maxReplace <= k){
        //             maxLen = max(maxLen, windowLen);
        //         } 
        //     }
        // }
        // return maxLen;
    }
};