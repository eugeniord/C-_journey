class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        st = []
        for char in s:
            if char == '(' or char == '[' or char == '{': st.append(char)
            else:
                if not st or (st[len(st) - 1]=='(' and char!=')') or (st[len(st) - 1]=='[' and char!=']') or (st[len(st) - 1]=='{' and char!='}'): return False
                st.pop()
        if len(st) > 0: return False
        return True

        