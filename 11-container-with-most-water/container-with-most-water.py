class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        p1 = 0
        p2 = len(height)-1
        maxProd = 0
        while p1 < p2:
            prod = min(height[p1], height[p2]) * (p2-p1)
            if maxProd < prod: maxProd = prod
            if height[p1] < height[p2]: p1 += 1
            else: p2 -= 1
        return maxProd
