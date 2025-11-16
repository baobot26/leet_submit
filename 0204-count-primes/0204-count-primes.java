class Solution {
    public boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        if (n <= 3) {
            return true;
        }
        if (n % 2 == 0) {
            return false;
        }
        if (n % 3 == 0) {
            return false;
        }
        int i = 5;
        while (i * i <= n) {
            if (n % i == 0) return false;
            if (n % (i + 2) == 0) return false;
            i = i + 6;
        }
        return true;
    }
    public int countPrimes(int n) {
        int count = 0;
        boolean[] primes = new boolean[n];
        for (int i = 2; i < n; ++i) {
            primes[i] = true;
        }
        for (int p = 2; p * p <= n; ++p) {
            if(primes[p] == true) {
                for (int j = p * p; j < n; j = j + p) {
                    primes[j] = false;
                }
            }
        }
        for (int i = 2; i < n; ++i) {
            if (primes[i]) ++count;
        }
        return count;
    }
}