class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        nums2 = [None] * len(nums)
        end = len(nums)-1
        p1 = 0
        p2 = len(nums)-1
        while p1 <= p2:
            if nums[p1]*nums[p1] > nums[p2]*nums[p2]:
                nums2[end] = nums[p1]*nums[p1]
                p1+=1
            else:
                nums2[end] = nums[p2]*nums[p2]
                p2-=1
            
            end-=1
        return nums2

        