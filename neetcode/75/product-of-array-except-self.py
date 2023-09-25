class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        
        res = [1] * len(nums)
        prefix = 1
        postfix = 1

        for i in range(len(nums)):
            res[i] *= prefix
            prefix *= nums[i]

        for i in reversed(range(len(nums))):
            res[i] *= postfix
            postfix *= nums[i]
        
        return res

