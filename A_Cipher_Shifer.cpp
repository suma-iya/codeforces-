#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s ,ans = ""; cin >> s;
        for(int i = 0; i<n; ++i){
            char ch = s[i];
            ans+=s[i];
            i++;
            while(s[i]!=ch){
                i++;
            }
        }
        cout << ans << '\n';
    }
}