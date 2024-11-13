class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        maxim = max(candies)
        res = []
        for candy in candies:
            if candy + extraCandies >= maxim:
                res.append(True)
            else:
                res.append(False)
        return res
        