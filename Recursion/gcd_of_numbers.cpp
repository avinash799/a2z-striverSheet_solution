#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {

    // Base case
    if (a == 0) {
        return b;
    }

    // Recursive call
    return gcd(b % a, a);
}

int main() {

    int a, b;
    cin >> a >> b;

    cout << "GCD = " << gcd(a, b);

    return 0;
}