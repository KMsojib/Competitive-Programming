#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
void solve(){
    ll n,k;
    cin>>n>>k;

    ll ans = 1,p = 2;
    while(k>0){
        if(k&1){
            ans = (ans*p)%mod;
        }
        p = (p*p)%mod;
        k/=2;
    }
    cout<<ans<<endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 