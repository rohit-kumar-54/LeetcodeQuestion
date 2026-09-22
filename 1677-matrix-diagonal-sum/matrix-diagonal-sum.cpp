class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int n = mat.size();
        int sum = 0;

        for(int i=0; i<n; i++){
            if( i == i) sum += mat[i][i];
            if ( i != n - i - 1) sum += mat[i][n-i-1];
        }
        return sum;



        // int n = mat.size();
        // int m = mat[0].size();
        // int sum = 0;
        
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         if( i == j ){  // Primary Diagonal 
        //             sum += mat[i][j];
        //         }

        //         else if( i+j == n-1){  // Secondary Diagonal
        //             sum += mat[i][j];
        //         }
        //     }
        // }
        // return sum;
       
    }
};