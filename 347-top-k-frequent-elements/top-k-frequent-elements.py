class Solution(object):
    def topKFrequent(self, nums, k):
        freq = defaultdict(int)
        for num in nums:
            freq[num]+=1
        freq = sorted(freq.items(),key = lambda x:x[1], reverse = True)
        firstK = [pair[0] for pair in freq[:k]]

        return firstK

