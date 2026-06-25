#include<bits/stdc++.h>
using namespace std;

void printlinearly(int cnt, int n){
    // Base condition
    if(cnt > n){
        return;
    }

    cout << cnt << endl;

    printlinearly(cnt + 1, n);
}

int main(){
    int n;
    cin >> n;

    printlinearly(1, n);

    return 0;
}