#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin>>n;

    vector<int>a(n),b(n),c(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) cin>>c[i];

    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        mp[b[c[i]-1]] ++;
    }
    int cn = 0;
    for(int i=0;i<n;i++){
        if(mp.find(a[i]) != mp.end()){
            cn += mp[a[i]];
        }
    }
    cout<<cn<<endl;
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
 