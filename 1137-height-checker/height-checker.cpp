class Solution {
public:
    int heightChecker(vector<int>& height) {
        int n = height.size();
        vector<int>ans;
        for(int i=0; i<n; i++){
            ans.push_back(height[i]);
        }

        sort(ans.begin() , ans.end());
        int count = 0;
        for(int i=0; i<n; i++){
            if(ans[i] != height[i]){
                count++;
            }
        }
        return count;

    }
};