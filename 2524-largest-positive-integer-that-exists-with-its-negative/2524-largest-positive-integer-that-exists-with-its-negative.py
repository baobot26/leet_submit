class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        s = set()
        k = -1
        for num in nums:
            if -num in s:
                if abs(num) > k: k = abs(num)
            s.add(num)
        return k