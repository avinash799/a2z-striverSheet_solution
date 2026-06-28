#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++; //1 is a factor
            if(i != n/i){
                cnt++;// (n/i)is also a factor
                
            }
        }

    }
}