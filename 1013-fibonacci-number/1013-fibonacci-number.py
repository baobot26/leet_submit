class Solution:
    dp = dict()
    def fib(self, n: int) -> int:
        if n in self.dp: return self.dp[n]
        if n <= 1: return n
        self.dp[n] = self.fib(n - 1) + self.fib(n - 2)
        return self.dp[n]