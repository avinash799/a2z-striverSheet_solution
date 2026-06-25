#include<bits/stdc++.h>
using namespace std;

void printname(int cnt, int n){
    // Base condition
    if(cnt == n){
        return;
    }

    cout << "avinash" << endl;

    printname(cnt + 1, n);
}

int main(){
    int n;
    cin >> n;

    printname(0, n);

    return 0;
}