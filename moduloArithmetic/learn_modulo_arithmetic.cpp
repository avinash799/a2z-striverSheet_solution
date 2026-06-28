// // Most Competitive Programming problems use this modulus.
// const long long MOD = 1000000007;


// //Modular Addition
// #include <bits/stdc++.h>
// using namespace std;

// const long long MOD = 1000000007;

// int main() {

//     long long a, b;
//     cin >> a >> b;

//     // Take modulo of both numbers first.
//     // Then add them.
//     // Take modulo again to keep answer within range.
//     long long ans = ((a % MOD) + (b % MOD)) % MOD;

//     cout << ans;

//     return 0;
// }


// //Modular Subtraction
// #include <bits/stdc++.h>
// using namespace std;

// const long long MOD = 1000000007;

// int main() {

//     long long a, b;
//     cin >> a >> b;

//     // +MOD ensures answer never becomes negative.
//     long long ans = ((a % MOD) - (b % MOD) + MOD) % MOD;

//     cout << ans;

//     return 0;
// }


// //modular Multiplication
// #include <bits/stdc++.h>
// using namespace std;

// const long long MOD = 1000000007;

// int main() {

//     long long a, b;
//     cin >> a >> b;

//     // Multiply first, then take modulo.
//     // 1LL converts multiplication into long long.
//     long long ans = (1LL * a * b) % MOD;

//     cout << ans;

//     return 0;
// }

// //Fast Modular Exponentiation (Binary Exponentiation)
// #include <bits/stdc++.h>
// using namespace std;

// const long long MOD = 1000000007;

// // Returns (base^exp)%MOD
// long long power(long long base, long long exp) {

//     long long ans = 1;

//     while (exp > 0) {

//         // If current bit is 1,
//         // multiply answer by current base.
//         if (exp & 1) {
//             ans = (ans * base) % MOD;
//         }

//         // Square the base.
//         base = (base * base) % MOD;

//         // Move to next bit.
//         exp = exp >> 1;
//     }

//     return ans;
// }

// int main() {

//     long long a, b;
//     cin >> a >> b;

//     cout << power(a, b);

//     return 0;
// }

// // Modular Inverse

// // Works only when MOD is prime.
// #include <bits/stdc++.h>
// using namespace std;

// const long long MOD = 1000000007;

// long long power(long long base, long long exp) {

//     long long ans = 1;

//     while (exp > 0) {

//         if (exp & 1)
//             ans = (ans * base) % MOD;

//         base = (base * base) % MOD;

//         exp >>= 1;
//     }

//     return ans;
// }

// // Returns modular inverse of a.
// long long modInverse(long long a) {

//     return power(a, MOD - 2);
// }



// int main() {

//     long long a;
//     cin >> a;

//     cout << modInverse(a);

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// const long long MOD = 1000000007;

// long long power(long long base, long long exp) {

//     long long ans = 1;

//     while (exp > 0) {

//         if (exp & 1)
//             ans = (ans * base) % MOD;

//         base = (base * base) % MOD;

//         exp >>= 1;
//     }

//     return ans;
// }

// long long modInverse(long long a) {

//     return power(a, MOD - 2);
// }

// int main() {

//     long long a, b;
//     cin >> a >> b;

//     // Divide by multiplying with modular inverse.
//     long long ans = (a % MOD) * modInverse(b) % MOD;

//     cout << ans;

//     return 0;
// }