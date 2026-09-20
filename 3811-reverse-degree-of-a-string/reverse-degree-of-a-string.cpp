class Solution {
public:
    int reverseDegree(string s) {
        
        int sum = 0;

        for(int i=0; i < s.size(); i++){
            int idx = i + 1;
            int reverse_index = 'z' - s[i] + 1;
            sum += (idx * reverse_index);
        }
        return sum;
    }
};