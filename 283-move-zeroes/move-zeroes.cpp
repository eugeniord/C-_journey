class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonNullValue;
        for(int i=0, nonNullValue = 0; i< nums.size(); i++){
            if(nums[i] != 0)
                swap(nums[nonNullValue++], nums[i]);
        }
    }
};