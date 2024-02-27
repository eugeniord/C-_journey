class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []
        nums.sort()
        for i in range(len(nums)-2):
            if i>0 and nums[i] == nums[i-1]: continue
            p1 = i+1
            p2 = len(nums)-1
            while p1<p2:
                sum = nums[p1]+nums[p2]+nums[i]
                if sum == 0: 
                    res.append([nums[i], nums[p1], nums[p2]])
                    while p1 < p2 and nums[p1] == nums[p1+1]: p1+=1
                    while p1 < p2 and nums[p2] == nums[p2-1]: p2-=1
                    p1+=1
                    p2-=1
                elif sum < 0: p1+=1
                else: p2-=1
        return res

        