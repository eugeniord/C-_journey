class Solution(object):
    def containsDuplicate(self, nums):
        exists = {}
        for num in nums:
            if num not in exists:
                exists[num] = 1
            else:
                exists[num] += 1
        for key in exists:
            if exists[key] >= 2:
                return True
        return False

        