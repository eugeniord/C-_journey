class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        longest, curLongest = 0, min(1, len(nums))
        for i in range (1, len(nums)):
            if nums[i] == nums[i-1]: continue
            if nums[i] == nums[i-1] + 1: curLongest +=1
            else:
                longest = max(longest, curLongest)
                curLongest = 1
        return max(longest, curLongest)
        