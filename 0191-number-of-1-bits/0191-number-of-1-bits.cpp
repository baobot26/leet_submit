class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;
        while (n != 0) {
            int temp = n % 2;
            if (temp) {
                res++;
            }
            n /= 2;
        }
        return res;
    }
};