import math

class Solution:
    def quadraticRoots(self, a, b, c):
        d = b * b - 4 * a * c

        if d < 0:
            return [-1]

        root1 = (-b + math.sqrt(d)) / (2 * a)
        root2 = (-b - math.sqrt(d)) / (2 * a)

        root1 = math.floor(root1)
        root2 = math.floor(root2)

        return [max(root1, root2), min(root1, root2)]