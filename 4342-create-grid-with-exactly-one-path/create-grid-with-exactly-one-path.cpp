class Solution {
public:
    vector<string> createGrid(int m, int n) {

        vector<string> grid(m, string(n, '#'));
        int rows = 0, cols = 0;
        bool right = true;

        grid[0][0] = '.';

        // alternate right and down
        while(rows < m-1 || cols < n-1){
            if((right && cols < n-1) || rows == m - 1){
                cols++;
            }
            else{
                rows++;
            }
            right = !right;
            grid[rows][cols] = '.';
        }
        return grid;

        
    }
};