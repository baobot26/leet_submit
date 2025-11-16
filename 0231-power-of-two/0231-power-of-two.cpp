class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        int res = 0;
        while (n != 0) {
            int temp = n % 2;
            if (temp) {
                res++;
            }
            n /= 2;
        }
        if (res == 1) {
            return true;
        }
        return false;
    }
};