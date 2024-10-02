#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n;
bool ok(ll x)
{
    return (x*(x+1))/2 <= n;
}


void solve(){
    cin>>n;
    ll l=1,r=1;
    while(ok(r))r*=2;
    while(l+1<r)
    {
        ll m=(l+r)/2;
        if(ok(m))l=m;
        else r=m;
    }
    cout<<l<<endl;
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
 