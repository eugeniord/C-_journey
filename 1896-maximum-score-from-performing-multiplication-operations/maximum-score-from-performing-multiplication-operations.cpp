class Solution {
private:
    int max (int a, int b){ return a < b ? b : a; }
    int memo[300][300] = {0};

    int dp (int i, int left, int right, vector<int>& nums, vector<int>& multipliers){
        int n = nums.size();
        int m = multipliers.size();

        if (i==m) return 0;

        int mult = multipliers[i];
        // int right = n - 1 - (i - left);

        if (memo[i][left] == 0){
            int r1 = mult * nums[left] + dp(i+1, left+1,right, nums, multipliers);
            int r2 = mult * nums[right] + dp(i+1, left, right-1, nums, multipliers);
            memo[i][left] = max (r1, r2);
        }
        return memo[i][left];
    }
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n = nums.size();
        int m = multipliers.size();
        return dp(0, 0, n-1, nums, multipliers);
    }
};