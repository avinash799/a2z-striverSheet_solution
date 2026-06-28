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

    long long a, b;
    cin >> a >> b;

    // Divide by multiplying with modular inverse.
    long long ans = (a % MOD) * modInverse(b) % MOD;

    cout << ans;

    return 0;
}