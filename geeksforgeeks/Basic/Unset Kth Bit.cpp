
class Solution:
    def replaceBit(self, n, k):
        bits = n.bit_length()

        if k > bits:
            return n

        pos = bits - k
        return n & ~(1 << pos)
