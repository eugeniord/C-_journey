class Solution {
private: 
    int max (int a, int b){ return a < b ? b : a; }
    int min (int a, int b, int c){
        if (a<=b && a<=c) return a;
        else if (b<=a && b<=c) return b;
        else return c;
    }
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        int maxim = 0;
        vector<vector<int>> dp(r + 1, vector<int>(c+1));

        if (r == 0) return 0;

        for (int i = 1; i <= r; ++i){
            for (int j = 1; j<=c; ++j){
                if (matrix[i-1][j-1] == '1'){
                    dp[i][j] = min(dp[i-1][j], dp[i-1][j-1], dp[i][j-1]) + 1;
                    maxim = max(maxim, dp[i][j]);
                }
            }
        }

        return maxim*maxim;


    }
};