class Solution(object):
    def twoSum(self, nums, target):
        myMap = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in myMap:
                return [myMap[complement], i]
            myMap[num] = i
        return []
        