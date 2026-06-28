#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

int main() {

    int n;
    cin >> n;

    long long fact = 1;

    // Compute factorial under modulo.
    for (int i = 1; i <= n; i++) {

        fact = (fact * i) % MOD;
    }

    cout << fact;

    return 0;
}