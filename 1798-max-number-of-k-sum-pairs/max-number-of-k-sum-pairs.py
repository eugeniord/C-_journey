class Solution(object):
    def maxOperations(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        counts = defaultdict(int)
        pairs = 0
        for num in nums:
            c = k - num
            if counts[c] > 0:
                counts[c] -= 1
                pairs += 1
            else:
                counts[num] += 1
        return pairs
        