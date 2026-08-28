class Solution {
public:
    int totalFruit(vector<int>& fruits) {

    // Better Approach : using map 

        int left = 0, right = 0, maxLen = 0;
        map<int, int> mpp;
        int k = 2;   // number of fruit basket

        while(right < fruits.size()){
            mpp[fruits[right]]++;

            if(mpp.size() > k){
                while(mpp.size() > k){
                    mpp[fruits[left]]--;

                    if(mpp[fruits[left]] == 0){
                        mpp.erase(fruits[left]);
                    }
                    left++;
                }
            }
            if(mpp.size() <= k){
                int len = right - left + 1;
                maxLen = max(len, maxLen);
            } 
            right++;
        }
        return maxLen;




    // Brute force : T.C : T.C = O(n * n) and S.C = O(n)   
        // int n = fruits.size();
        // int maxLen = 0;
        // for(int i=0; i<n; i++){
        //     set<int> st;

        //     for(int j=i; j<n; j++){
        //         st.insert(fruits[j]);

        //         if(st.size() <= 2){
        //             int len = j - i + 1;
        //             maxLen = max(maxLen, len);
        //         }
        //     }
        // }
        // return maxLen;


   
    }
};