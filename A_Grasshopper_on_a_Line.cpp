#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k>n){
            cout << 1 << '\n' << n << '\n';
        }else if(n%k!=0){
            cout << 1 << '\n' << n << '\n';
        }else{
            cout << 2 << '\n';
            cout << --k << " " << n-k << '\n';
        }
    }
}