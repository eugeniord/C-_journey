class Solution(object):
    def longestOnes(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        maxNum = 0
        start = 0
        countOfTwos = 0
        for end in range (len(nums)):

            if nums[end] == 0: countOfTwos += 1

            while countOfTwos > k:
                if nums[start] == 0:
                    countOfTwos -= 1
                start += 1
            maxNum = max(maxNum, end-start + 1)
        return maxNum
        