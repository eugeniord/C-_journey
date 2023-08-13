class Solution {
private:
    int max (int a, int b){ return a < b ? b : a; }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int dp[1002][1002] = {0};
        
        
        for (int i=0; i < text1.size(); ++i)
            for (int j=0; j < text2.size(); ++j){
                if (text1[i] == text2[j])
                    dp[i+1][j+1] = dp[i][j] + 1;
                else
                    dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        // cout <<text1.size()<< " "<< text2.size()<< " "<<  dp[text1.size()][text2.size()];
        return dp[text1.size()][text2.size()];
        
    }
};