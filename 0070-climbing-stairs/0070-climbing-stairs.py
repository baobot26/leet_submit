class Solution:
    dp = dict()
    def climbStairs(self, n: int) -> int:
        if n in self.dp:
            return self.dp[n]
        if n <= 3: return n
        self.dp[n] = self.climbStairs(n - 2) + self.climbStairs(n - 1)
        return self.dp[n]