#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;    cin>>n>>k;
    int ans = n;
    int candel = n;
    while(candel >= k){
        ans += candel / k;
        candel = candel / k + candel % k;
    }

    cout<<ans<<endl;
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

