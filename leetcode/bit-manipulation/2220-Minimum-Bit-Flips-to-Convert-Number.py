class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        ans=start^goal
        return (start ^ goal).bit_count()