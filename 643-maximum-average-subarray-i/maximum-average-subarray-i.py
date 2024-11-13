class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        ourSum = sum(nums[:k])
        maxSum = ourSum

        for i in range(k, len(nums)):
            ourSum += nums[i] - nums[i-k]
            maxSum = max(maxSum, ourSum)
        return maxSum/float(k)

        