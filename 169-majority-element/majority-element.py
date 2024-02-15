class Solution(object):
    def majorityElement(self, nums):
        myMap = {}
        for num in nums:
            if num in myMap:
                myMap[num] += 1
            else:
                myMap[num] = 1
            if myMap[num] > len(nums)/2:
                return num
        