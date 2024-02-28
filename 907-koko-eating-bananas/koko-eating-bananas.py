import math

class Solution(object):
    def minEatingSpeed(self, piles, h):
        """
        :type piles: List[int]
        :type h: int
        :rtype: int
        """
        l = 1
        r = max(piles)
        res = r

        while l <= r:
            s = 0
            mid = (r + l) // 2 
            for i in piles:
                if i % mid !=0:
                    s += i // mid + 1
                else: s += i // mid
            if s <= h:
                res = min(res, mid)
                r = mid - 1
            else:
                l = mid + 1
        return res
