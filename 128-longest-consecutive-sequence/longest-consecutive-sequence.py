class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s = set(nums)
        longest = 0
        for num in s:
            if num-1 in s: continue
            j = 1
            while num+j in s: j+=1
            longest = max(longest, j)
        return longest
        