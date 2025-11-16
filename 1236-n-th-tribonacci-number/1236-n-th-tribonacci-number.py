class Solution:
    dp = dict()
    def tribonacci(self, n: int) -> int:
        if n in self.dp: return self.dp[n]
        if n <= 1: return n
        if n == 2: return 1
        self.dp[n] = self.tribonacci(n - 3) + self.tribonacci(n - 2) + self.tribonacci(n - 1)
        return self.dp[n]

        