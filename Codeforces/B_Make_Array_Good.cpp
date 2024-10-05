#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll powerVal(ll x){
    ll crn = 1;
    while(crn<=x){
        crn*=2;
    }
    return crn;
}

void solve(){
    ll n;   cin>>n;
    cout<<n<<endl;
    for(ll i=1;i<=n;i++){
        ll x;   cin>>x;
        cout<<i<<" "<<powerVal(x) - x<<endl;
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
 