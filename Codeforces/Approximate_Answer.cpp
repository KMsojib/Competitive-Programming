#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll x,y,z;   cin>>x>>y>>z;
    if(abs(x) - abs(y) <= z){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 