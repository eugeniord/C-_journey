class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s)!= len(t):
            return False

        chars = {}
        chart = {}
        for char in range(len(s)):
            chars[s[char]] = 1 + chars.get(s[char], 0)
            chart[t[char]] = 1 + chart.get(t[char], 0)

        for char in chars:
            if chars[char] != chart.get(char, 0):
                return False
        return True
        
        