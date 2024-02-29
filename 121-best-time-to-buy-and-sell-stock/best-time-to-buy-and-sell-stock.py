class Solution(object):
    def maxProfit(self, prices):
        minPrice = 10001
        maxProfit = 0

        for price in prices:
            if price < minPrice: minPrice = price
            elif price - minPrice > maxProfit:
                maxProfit = price - minPrice
        if maxProfit == 0: return 0
        else: return maxProfit
        