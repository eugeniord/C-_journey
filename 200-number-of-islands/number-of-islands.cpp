class Solution {
public:
    void dfs(vector<vector<char>>& grid, int row, int col){
        int nlin = grid.size();
        int ncol = grid[0].size();

        grid[row][col] = '0';

        if (row - 1 >= 0 && grid[row-1][col] == '1') dfs(grid, row - 1, col);
        if (row + 1 < nlin && grid[row+1][col] == '1') dfs(grid, row + 1, col);
        if (col - 1 >= 0 && grid[row][col-1] == '1') dfs(grid, row, col - 1);
        if (col + 1 < ncol && grid[row][col+1] == '1') dfs(grid, row, col + 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int nlin = grid.size();
        if (!nlin) return 0;
        int ncol = grid[0].size();
        int numIslands = 0;

        for (int i = 0; i < nlin; ++i)
            for (int j = 0; j < ncol; ++j)
                if (grid[i][j] == '1'){
                    ++numIslands;
                    dfs(grid, i, j);
                }
        return numIslands;

    }
};