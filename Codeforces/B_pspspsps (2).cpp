#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int pp = 0, ss = 0;
    int idx = 0, si = 0, pi = -1;
    for(auto &it : s){
        if(it == 's'){
            ss++;
            si = idx;
        }
        if(it == 'p'){
            pp++;
            if(pi == -1){
                pi = idx;
            }
        }
        idx++;
    }
    if(pp == 0 || ss == 0){
        cout<<"YES\n";
        return;
    }
    if(si == 0 || pi == n - 1){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}