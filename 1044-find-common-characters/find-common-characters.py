class Solution(object):
    def commonChars(self, words):
        res = []
        d = defaultdict(lambda: 0)
        for x in words[0]:
            d[x] += 1
        
        for key in d:
            for word in words[1:]:
                if not key in word:
                    d[key] = 0
                else:
                    if d[key] > 1:
                        d[key] = min(d[key], word.count(key))
        for key, value in d.items():
            if value > 0:
                for i in range(value):
                    res.append(key)
        return res
       
        