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
            prod = (p2 - p1) * min(height[p1], height[p2])
            if prod > maxProd: maxProd = prod
            if height[p1] >= height[p2]: p2-=1
            else: p1+=1
        return maxProd