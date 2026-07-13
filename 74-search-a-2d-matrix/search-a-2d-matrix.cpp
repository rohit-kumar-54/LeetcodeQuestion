class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

    // Optimal approach -> using binary search
        int row = matrix.size() , col = matrix[0].size();
        int low = 0, high = row * col - 1;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            int i = mid / col;      // for ith and jth index always divide by col
            int j = mid % col;
            if(matrix[i][j] == target){
                return true;
            } 
            else if(matrix[i][j] < target){
                low++;
            }
            else{
                high--;
            }
        }
        return false;


    // Brute force -> Using two loop -- T.C = O(n * n)  and S.C = O(1)
        // int m = matrix.size();
        // int n=matrix[0].size();
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;
    }
};