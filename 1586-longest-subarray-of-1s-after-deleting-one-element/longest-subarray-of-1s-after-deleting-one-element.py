class Solution(object):
    def longestSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maxLength = 0
        start = 0
        zeros = 0
        for end in range(len(nums)):
            if nums[end] == 0:
                zeros += 1
            while zeros > 1:
                if nums[start] == 0:
                    zeros -=1
                start += 1
            maxLength = max(maxLength, end - start)
        return maxLength
            


        