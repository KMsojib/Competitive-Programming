#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,x,m;
    cin>>n>>x>>m;

    ll l=x,r=x;
    for(int i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        if((a<=l && b>=l) || (a<=r && b>=r)){
            l=min(l,a);
            r=max(r,b);
        }
    }
    cout<<r-l+1<<endl;
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
 