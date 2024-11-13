class Solution(object):
    def mergeAlternately(self, word1, word2):
        cnt = 0
        res = ""
        while (cnt < len(word1) or cnt < len(word2)):
            if cnt < len(word1): res += word1[cnt]
            if cnt < len(word2): res += word2[cnt]
            cnt+=1
        return res
        