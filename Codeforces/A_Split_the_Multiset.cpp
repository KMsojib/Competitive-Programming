#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    ll n,k; cin>>n>>k;
    int cn = 0;
    while(n>1){
        n-=(k-1);
        cn++;
    }
    cout<<cn<<endl;
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
