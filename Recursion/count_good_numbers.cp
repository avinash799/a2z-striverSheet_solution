//brute force solution
class Solution {
public:
    int countGoodNumbers(long long n) {
        const long long MOD = 1000000007;

        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long ans = 1;

        // Multiply 5 for every even position
        for (long long i = 0; i < even; i++) {
            ans = (ans * 5) % MOD;
        }

        // Multiply 4 for every odd position
        for (long long i = 0; i < odd; i++) {
            ans = (ans * 4) % MOD;
        }

        return ans;
    }
};

//optimal solution

class Solution {
public:
    long long MOD = 1000000007LL;

    long long power(long long base, long long exp) {
        if (exp == 0)
            return 1;

        long long half = power(base, exp / 2);

        if (exp % 2 == 0)
            return (half * half) % MOD;

        return (((half * half) % MOD) * base) % MOD;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        return (power(5, even) * power(4, odd)) % MOD;
    }
};