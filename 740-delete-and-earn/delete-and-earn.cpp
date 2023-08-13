class Solution {
private:
    int max(int a, int b){
        if (a>b) return a;
        return b;
    }
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> points(10001), dp(10001);
        for (int i = 0; i < nums.size(); ++i)
            points[nums[i]] += nums[i];
        
        dp[1] = points[1];
        dp[2] = max (points[1], points[2]);
        for (int i = 3; i < dp.size(); ++i){
            dp[i] = max(dp[i-2]+ points[i], dp[i-1]);
        }
        return max(dp[10000],dp[9999]);
    }
};