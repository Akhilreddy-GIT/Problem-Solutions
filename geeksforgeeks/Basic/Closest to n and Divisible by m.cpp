class Solution:
    def closestNumber(self, N, M):
        M = abs(M)

        q = N // M

        num1 = q * M
        num2 = (q + 1) * M

        d1 = abs(N - num1)
        d2 = abs(N - num2)

        if d1 < d2:
            return num1
        elif d2 < d1:
            return num2
        else:
            if abs(num1) > abs(num2):
                return num1
            else:
                return num2