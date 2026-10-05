class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size() , n = matrix[0].size();
        vector<int> ans;
        int stRow = 0, endRow = m-1, stCol = 0, endCol = n -1;

        while(stRow <= endRow && stCol <= endCol){
        // Top row
            for(int i = stCol; i <= endCol; i++){
                ans.push_back(matrix[stRow][i]);
            }
            stRow++;

        // Right colum

            for(int i = stRow; i <= endRow; i++){
                ans.push_back(matrix[i][endCol]);
            }
            endCol--;

        // Bottom row
            if (stRow <= endRow) {
                for (int i = endCol; i >= stCol; i--) {
                    ans.push_back(matrix[endRow][i]);
                }
                endRow--;
            }

        // Left column
            if (stCol <= endCol) {
                for (int i = endRow; i >= stRow; i--) {
                    ans.push_back(matrix[i][stCol]);
                }
                stCol++;
            }

        }

        




        return ans;
    }
};