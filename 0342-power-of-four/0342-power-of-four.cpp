class Solution {
public:
    bool isPowerOfFour(int n) {
        bool positive = n > 0;
        if (!positive) return positive;
        bool pow2 = n & (n - 1);
        bool pow4 = n & 0xAAAAAAAA;
        return positive && !pow2 && !pow4;
    }
};