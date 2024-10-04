#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1000000007;

ll power(ll n){
    ll res = 1;
    for(ll i=1;i<=n;i++){
        res*=2;
        res%=mod;
    }
    return res%mod;
}

void solve(){
    ll n;   cin>>n;
    cout<<power(n)<<endl;
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
 