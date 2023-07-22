class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int c1 = 0, c2 = numbers.size() - 1;
        while (c1 < c2){
            int s = numbers[c1] + numbers[c2];

            if (s == target)
                return {c1 + 1, c2 + 1};
            else if (s < target)
                ++c1;
            else if (s > target)
                --c2;
        }
        return {-1, -1};
    }
};