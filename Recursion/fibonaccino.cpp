#include<bits/stdc++.h>
using namespace std;

class Fibonacci {
public:
    int fibonaccino(int n) {
        // Base condition
        if (n <= 1) {
            return n;
        }

        int last = fibonaccino(n - 1);
        int slast = fibonaccino(n - 2);  

        return last + slast;
    }
};

int main() {
    //create obj of class
    Fibonacci obj1;
    
    int n = 6;

    cout << obj1.fibonaccino(n);

    return 0;
}