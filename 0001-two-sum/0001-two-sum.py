class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = dict()
        for i in range(len(nums)):
            current = nums[i]
            complement = target - current
            if complement in d: return [i, d[complement]]
            d[current] = i
        return []
        