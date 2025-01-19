class Solution(object):
    def areOccurrencesEqual(self, s):
        """
        :type s: str
        :rtype: bool
        """
        vc = {}
        for char in s:
            vc[char] = vc.get(char, 0) + 1
        if len(set(vc.values())) == 1:
            return True
        return False
        