#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,m; cin>>n>>m;
    ll min = 0, max = 0;
    ll x = n/m;
    ll y = n%m;
    min = x*(x+1)*y / 2 + (x-1)*x*(m-y) / 2;
    max = (n-m+1)*(n-m)/2;
    cout<<min<<" "<<max<<endl;
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

