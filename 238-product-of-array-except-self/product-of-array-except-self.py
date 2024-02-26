class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = [1] * len(nums)
        produs = 1
        for i in range (1, len(nums)):
            ans[i] = ans[i-1] * nums[i-1]
        for j in range (len(nums) - 1, -1, -1):
            ans[j] = ans[j] * produs
            produs *= nums[j]
        return ans
        