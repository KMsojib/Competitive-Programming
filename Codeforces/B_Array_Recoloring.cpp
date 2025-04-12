#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(k > 1){
        sort(a.begin(), a.end(),greater<ll>());
        cout<<accumulate(a.begin(), a.begin()+k + 1, 0LL)<<"\n";
    }
    else{
        ll left = *max_element(a.begin(), a.end()-1);
        ll right = *max_element(a.begin()+1, a.end());
        ll ans = max(left + a.back(), right + a[0]);
        cout<<ans<<"\n";
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
 