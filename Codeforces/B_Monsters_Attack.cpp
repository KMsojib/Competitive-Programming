#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ios::sync_with_stdio(0);
    ll n,k;     cin>>n>>k;
    vector<ll>h(n),x(n);

    for(int i=0; i<n; i++)  cin>>h[i];
    for(int i=0; i<n; i++)  cin>>x[i];

    vector<ll>point(n+1);
    for(int i=0; i<n; i++){
        point[abs(x[i])] += h[i];
    }

    bool ok = true;
    ll left = 0;
    for(int i=1; i<=n; i++){
        left += k - point[i];
        ok &= (left >= 0);
    }
    cout<<(ok? "YES" : "NO") <<"\n";
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
 