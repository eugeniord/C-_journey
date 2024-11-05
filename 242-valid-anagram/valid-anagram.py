class Solution(object):
    def checkFreq(self, str):
        freq = {}
        for s in str:
            if s not in freq:
                freq[s] = 1
            else:
                freq[s] += 1
        return freq
    def isAnagram(self, s, t):
        if len(s) != len(t):
            return False
        c1 = self.checkFreq(s)
        c2 = self.checkFreq(t)
        if c1 == c2:
            return True
        return False
        
        