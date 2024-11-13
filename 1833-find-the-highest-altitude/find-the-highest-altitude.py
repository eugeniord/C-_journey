class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """
        maxim = 0
        suma = 0
        for i in range(0, len(gain)):
            suma += gain[i]
            if suma > maxim: maxim = suma
        return maxim