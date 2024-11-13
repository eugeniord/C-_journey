class Solution(object):
    def maxVowels(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        vowelSet = {'a', 'e', 'i', 'o', 'u'}
        substr = s[:k]
        curVowels = 0
        for char in substr:
            if char in vowelSet: curVowels += 1
        maxV = curVowels
        for i in range(k, len(s)):
            if s[i] in vowelSet:
                curVowels += 1
            if s[i-k] in vowelSet:
                curVowels -= 1
        
            maxV = max(maxV, curVowels)
        return maxV
            

        