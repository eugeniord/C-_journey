class Solution(object):
    def maxProfit(self, prices):
        l, r = 0, 1
        maxProfit = 0
        while r < len(prices):
            if prices[l] > prices[r]:
                l = r
            else:
                profit = prices[r] - prices[l]
                maxProfit = max(maxProfit, profit)
            r += 1
        return maxProfit

        
        