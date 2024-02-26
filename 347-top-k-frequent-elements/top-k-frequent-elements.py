class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        freq = {}
        for number in nums:
            if number in freq:
                freq[number] += 1
            else:
                freq[number] = 1
    
        sortedDict = sorted(freq.items(), key = lambda item: item[1], reverse = True)
        
        firstKElements = [item[0] for item in sortedDict[:k]]
        
        return firstKElements