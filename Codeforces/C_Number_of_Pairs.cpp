#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,l,r;
    cin>>n>>l>>r;

    vector<ll>a(n);
    for(auto &it : a)   cin>>it;

    sort(a.begin(),a.end());
    ll ans = 0;
    for(int i=0;i<n;i++){
        //cout<<a[i]<<" ";
        ll up = upper_bound(a.begin(),a.end(),r - a[i]) - a.begin();
        ll lo = lower_bound(a.begin(),a.end(),l - a[i]) - a.begin();

        //cout<<up<<" "<<lo<<endl;
        ans += up - lo;

        if(i<up && i>=lo){
            ans--;
        }
    }
    cout<<ans/2<<endl;
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
