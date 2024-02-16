class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0
        cnt = 1
        for i in range(1, len(nums)):
            if nums[i-1] != nums[i]:
                nums[cnt] = nums[i]
                cnt+=1
        return cnt
        