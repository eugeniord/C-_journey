class Solution {
private:
    int min (int a, int b){
        if (a>b) return b;
        return a;
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> costs (cost.size() + 1);
        for (int i = 2; i < costs.size(); ++i){
            int oneS = costs[i-1] + cost[i-1];
            int twoS = costs[i-2] + cost[i-2];

            costs[i] = min(oneS, twoS);
        }
        
        return costs[costs.size()-1];
    }
};