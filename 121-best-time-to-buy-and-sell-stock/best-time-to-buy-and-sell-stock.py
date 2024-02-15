class Solution(object):
    def maxProfit(self, prices):
        minPrice = 100000
        maximProfit = 0
        for price in prices:
            if price < minPrice:
                minPrice = price
            elif price - minPrice > maximProfit:
                maximProfit = price - minPrice
        return maximProfit
        