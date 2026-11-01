class Solution:
    def subsets(self, nums: list[int]) -> list[list[int]]:
        n=len(nums)
        subsets=1<<n
        ans=[]
        for num in range(subsets):
            list=[]
            for i in range(n):
                if num&(1<<i):
                    list.append(nums[i])
            ans.append(list)
        return ans
