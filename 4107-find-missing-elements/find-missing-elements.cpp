class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        vector<int> ans;

        unordered_set<int> st;
        int mini = INT_MAX;
        int maxi  = INT_MIN;

        for(int ele : nums){
            st.insert(ele);

            mini = min(ele, mini);
            maxi = max(ele, maxi);
        }

        for(int i=mini; i<=maxi; i++){
            if(st.find(i) == st.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};