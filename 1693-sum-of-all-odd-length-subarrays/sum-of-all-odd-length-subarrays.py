class Solution(object):
    def sumOddLengthSubarrays(self, arr):
        res = 0
        n = len(arr)

        for i in range (n):
            end = i + 1
            start = n - i
            total = start*end
            odd = total / 2
            if total%2==1:
                odd+=1
            res += odd * arr[i]
        return res    
        