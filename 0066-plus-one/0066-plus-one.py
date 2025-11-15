class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry = 0
        digits[len(digits) - 1] = digits[len(digits) - 1] + 1
        if digits[len(digits) - 1] >= 10:
            carry = 1
            digits[len(digits) - 1] %= 10
        for i in range (len(digits) - 2, -1, -1):
            digits[i] = digits[i] + carry
            if digits[i] >= 10: 
                carry = 1
                digits[i] = digits[i] % 10
            else: carry = 0
        if carry == 1: 
            digits.insert(0, 1)
        return digits
        