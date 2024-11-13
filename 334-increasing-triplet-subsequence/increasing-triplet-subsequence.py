class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        p1 = float('inf')
        p2 = float('inf')
        for num in nums:
            if num <= p1:
                p1 = num
            elif num <= p2:
                p2 = num
            else:
                return True
        return False
