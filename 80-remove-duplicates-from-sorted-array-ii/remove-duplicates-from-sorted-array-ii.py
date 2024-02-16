class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) < 3:
            return len(nums)
        
        cnt = 2
        for i in range(2, len(nums) ):
            if nums[cnt-2] != nums[i]:
                nums[cnt] = nums[i]
                cnt += 1
        return cnt
