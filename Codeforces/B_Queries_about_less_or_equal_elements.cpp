#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,m;
    scanf("%lld %lld",&n,&m);
    vector<ll> a(n),b(m);
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%lld",&b[i]);
    }

    sort(a.begin(),a.end());
    vector<ll> ans;
    for(int i=0;i<m;i++){
        int res = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
        ans.push_back(res);
    }

    for(int i=0;i<m;i++){
        printf("%lld ",ans[i]);
    }
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
 