class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) {
        int row = rooms.size();
        int col = rooms[0].size();

        queue<pair<int, int>> canReach;
        vector<pair<int, int>> dirs = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(0 == rooms[i][j])
                    canReach.emplace(i, j);
            }
        }
        while(!canReach.empty()){
            int r = canReach.front().first, c = canReach.front().second;
            canReach.pop();
            for (auto dir : dirs) {
                int x = r + dir.first,  y = c + dir.second;
                // if x y out of range or it is obstasle, or has small distance aready
                if (x < 0 || y < 0 || x >= row || y >= col || rooms[x][y] <= rooms[r][c]+1) continue;
                rooms[x][y] = rooms[r][c] + 1;
                canReach.emplace(x, y);
            }
        }
        
    }
};