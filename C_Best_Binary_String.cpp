#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int i = 0;
        string word = "";
        while(s[i]=='?' and i<s.length()){
            s[i] = '0';
            i++;
        }
        for(; i<s.length(); ++i){
            if(i>0 and s[i-1]=='0' && s[i]=='?'){
                s[i]='0';
            }else if(i>0 and s[i-1]=='1' && s[i]=='?'){
                s[i] = '1';
            }
        }
        cout << s << '\n';
    }
}