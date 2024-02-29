class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        charsAt = {}
        l = 0
        maxLength = 0
        for r in range(len(s)):
            if s[r] in charsAt:
                l = max(l, charsAt[s[r]] + 1)
            charsAt[s[r]] = r
            maxLength = max(maxLength, r - l + 1)
        return maxLength
        