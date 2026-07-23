class Solution {
public:

    int func(int i, int j, vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp){
        
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        for(int i=0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(obstacleGrid[i][j] == 1){
                    dp[i][j] = 0;  // avoid the obstacle;
                    continue;
                }

                if(i==0 && j==0){
                    dp[i][j] = 1;
                    continue;
                }
                int up = 0, left = 0;
                if(i>0) up = dp[i-1][j];
                if(j > 0) left = dp[i][j-1];
                dp[i][j] = up + left;
            }
            
        }
        return dp[m-1][n-1];
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));
        return func(m, n, obstacleGrid, dp);
    }
};