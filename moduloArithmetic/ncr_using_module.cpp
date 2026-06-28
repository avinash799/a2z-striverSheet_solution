#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long power(long long base, long long exp) {

    long long ans = 1;

    while (exp > 0) {

        if (exp & 1)
            ans = (ans * base) % MOD;

        base = (base * base) % MOD;

        exp >>= 1;
    }

    return ans;
}

long long modInverse(long long a) {

    return power(a, MOD - 2);
}

int main() {

    int n, r;
    cin >> n >> r;

    vector<long long> fact(n + 1);

    fact[0] = 1;

    // Precompute factorials.
    for (int i = 1; i <= n; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    // nCr = n! / (r! * (n-r)!)
    long long ans = fact[n];
    ans = (ans * modInverse(fact[r])) % MOD;
    ans = (ans * modInverse(fact[n - r])) % MOD;

    cout << ans;
}