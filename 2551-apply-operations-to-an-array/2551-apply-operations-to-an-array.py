class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        for i in range(len(nums) - 1):
            if nums[i] == nums[i + 1]:
                nums[i] *= 2
                nums[i + 1] = 0
        slow = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                nums[slow], nums[i] = nums[i], nums[slow]
                slow += 1
        return nums
        