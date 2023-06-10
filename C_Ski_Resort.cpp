#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    while(t--){
        int n, q, k;
        cin >> n >> q >> k;
        ll cnt = 0, ans = 0;
        for(int i = 0; i<n; ++i){
            int x; cin >> x;
            if(x<=k){
                cnt++;
                cnt>=q? ans+=cnt-q+1: ans ;
            }else{
                cnt = 0;
            }
        }
        cout << ans << '\n';
    }
}