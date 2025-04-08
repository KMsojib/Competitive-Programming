#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n; cin>>n;
    ll cnt = 0, sum = 0,maxi = 0;
    for(int i=0; i<n; i++){
        ll x; cin>>x;
        maxi = max(maxi, x);
        sum += x;
        if(x&1) cnt++;
    }
    if(!cnt || cnt == n){
        cout<<maxi<<endl;
    }
    else{
        cout << sum - cnt + 1 << '\n';
    }
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
