class Solution(object):
    def characterReplacement(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        chars = {}
        l = 0
        maxCount = 0
        maxLength = 0
        for r in range (len(s)):
            chars[s[r]] = chars.get(s[r], 0) + 1
            maxCount = max(maxCount, chars[s[r]])
            while (r - l + 1) - maxCount > k:
                chars[s[l]] -= 1
                l += 1

            maxLength = max(maxLength, r - l + 1)
        return maxLength
