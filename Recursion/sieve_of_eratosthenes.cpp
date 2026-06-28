#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n = 30;
    
    vector<bool> isPrime(n + 1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {

        if (isPrime[i]) {

            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    cout << "Prime numbers are:\n";

    for (int i = 2; i <= n; i++) {
        if (isPrime[i])
            cout << i << " ";
    }

    return 0;
}


#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    // Create an array of size (n + 1).
    // Initially assume every number is prime (1 = prime, 0 = not prime).
    vector<int> prime(n + 1, 1);

    // 0 and 1 are not prime numbers.
    prime[0] = 0;
    prime[1] = 0;

    // Check every number from 2 to n.
    for (int i = 2; i <= n; i++) {

        // If this number is already marked as not prime,
        // then skip it because it is a multiple of some smaller number.
        if (!prime[i]) {
            continue;
        }

        // Mark all multiples of i as not prime.
        // We start from 2*i because i itself is a prime number.
        for (int j = 2 * i; j <= n; j += i) {

            // j is a multiple of i, so it cannot be prime.
            prime[j] = 0;
        }
    }

    // Print all prime numbers.
    cout << "Prime Numbers are: ";

    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            cout << i << " ";
        }
    }

    return 0;
}