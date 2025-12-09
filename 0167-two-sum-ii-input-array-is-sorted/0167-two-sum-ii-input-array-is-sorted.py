class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l = 0
        r = 0
        for i in range(0, len(numbers)):
            complement = target - numbers[i]
            temp = bisect.bisect_left(numbers, complement, lo = i + 1)
            if temp < len(numbers) and numbers[temp] == complement:
                l = i
                r = temp
                break
        return [l + 1, r + 1]