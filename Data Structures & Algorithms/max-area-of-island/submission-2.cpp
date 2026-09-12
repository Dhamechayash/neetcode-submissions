class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int ans = 0;
        for(int i=0;i<rows;i++){
            for(int j=0;j< cols; j++){
                if(grid[i][j] == 1){
                    int t = 0;
                    dfs(i, j, rows, cols, grid, t);
                    ans = max(ans, t);
                }
            }
        }
        return ans;
    }
private:
    void dfs(int i, int j, int rows, int cols, vector<vector<int>>& grid, int &t){
        if(i<0 || i>=rows || j<0 || j>=cols || grid[i][j] == 0) return;
        if(grid[i][j] == 1){
            grid[i][j] = 0;
            t++;
        }
        dfs(i-1, j, rows, cols, grid, t);
        dfs(i, j-1, rows, cols, grid, t);
        dfs(i+1, j, rows, cols, grid, t);
        dfs(i, j+1, rows, cols, grid, t);
    }
};
