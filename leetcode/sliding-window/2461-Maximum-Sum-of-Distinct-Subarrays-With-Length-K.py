class Solution:
    def maximumSubarraySum(self, nums: list[int], k: int) -> int:
        freq = {}
        window_sum = 0
        max_sum = 0

        for i in range(k):
            window_sum += nums[i]
            freq[nums[i]] = freq.get(nums[i], 0) + 1

        if len(freq) == k:
            max_sum = window_sum

        for right in range(k, len(nums)):
            outgoing = nums[right - k]
            incoming = nums[right]

            window_sum -= outgoing
            freq[outgoing] -= 1

            if freq[outgoing] == 0:
                del freq[outgoing]

            window_sum += incoming
            freq[incoming] = freq.get(incoming, 0) + 1

            if len(freq) == k:
                max_sum = max(max_sum, window_sum)

        return max_sum
