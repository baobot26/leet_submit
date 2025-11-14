class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        sets = sorted(list(set(nums)))
        i = 0
        for num in sets:
            nums[i] = num
            i += 1
        return i


        