class Solution {
public:

    int m, n;

    bool dfs(vector<vector<int>>& grid, int r, int c){
        if(r >= m || r < 0 || c >= n || c < 0){  // out of bound
            return false;  // Not closed
        }

        if(grid[r][c] == 1){  // Water present
            return true; // closed from this side
        }

        grid[r][c] = 1 ; // mark visited

        bool left_closed = dfs(grid, r, c-1);
        bool right_closed = dfs(grid, r, c+1);
        bool up_closed = dfs(grid, r-1, c);
        bool down_closed = dfs(grid, r+1, c);

        return left_closed && right_closed && up_closed && down_closed;

    }


    int closedIsland(vector<vector<int>>& grid) {
        
        // closed island is an island which is totally surrounded by 1s. (all left, right, top, bottom);

        // Apply dfs whenever we get 0
            // out of bound -> return false
            // left dfs -> True
            // right dfs -> True
            // up side dfs-> dfs
            // down side dfs -> dfs

        m = grid.size();
        n = grid[0].size();
        int cnt = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 0){  // means we get land
                    if(dfs(grid, i , j) == true){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
        


    }
};