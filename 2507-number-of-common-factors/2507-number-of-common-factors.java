class Solution {
    public int GCD(int a, int b) {
        if (a == 0) return b;
        if (b == 0) return a;
        if (a > b) return GCD(a % b, b);
        return GCD(a, b % a);
    }
    public int commonFactors(int a, int b) {
        int count = 1;
        int gcd = GCD(a, b);
        for (int i = 1; i < gcd; ++i) {
            if (gcd % i == 0) ++count;
        }
        return count;
    }
}