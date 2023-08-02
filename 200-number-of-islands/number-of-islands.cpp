class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int nlin = grid.size();

        if (!nlin) return 0;
        int ncol = grid[0].size();

        int numIslands = 0;

        for (int i = 0; i < nlin; ++i)
            for (int j = 0; j < ncol; ++j){
                if (grid[i][j] == '1'){
                    ++numIslands;
                    grid[i][j] = '0';
                    queue<pair<int, int>> neighb;
                    neighb.push({i, j});

                    while (!neighb.empty()){
                        auto [row, col] = neighb.front();
                        neighb.pop();

                        if (row - 1 >= 0 && grid[row-1][col] == '1') {
                            neighb.push({row-1, col}); grid[row-1][col] = '0';
                        }
                        if (row + 1 < nlin && grid[row+1][col] == '1') {
                            neighb.push({row+1, col}); grid[row+1][col] = '0';
                        }
                        if (col - 1 >= 0 && grid[row][col-1] == '1') {
                            neighb.push({row, col-1}); grid[row][col-1] = '0';
                        }
                        if (col + 1 < ncol && grid[row][col+1] == '1') {
                            neighb.push({row, col+1}); grid[row][col+1] = '0';
                        }
                    }
                }
            }
        return numIslands;
    }
};