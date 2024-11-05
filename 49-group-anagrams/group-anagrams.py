class Solution(object):
    def groupAnagrams(self, strs):
        res = defaultdict(list)
        for s in strs:
            sortedString = ''.join(sorted(s))
            res[sortedString].append(s)
        return res.values()
        