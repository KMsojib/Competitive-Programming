#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<int>a(n),h(n);
    for(auto &it : a)   cin>>it;
    for(auto &it : h)   cin>>it;

    ll ans = 0, sum = 0, start = 0;
    for(int right = 0; right<n; right++){
        if(right>0 && h[right-1]%h[right]){
            start = right;
            sum = 0;
        }
        sum+=a[right];
        while(start<=right && sum>k){
            sum -= a[start];
            start++;
        }

        ll len = right - start + 1;
        ans = max(ans,len);
    }
    cout<<ans<<endl;
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
 