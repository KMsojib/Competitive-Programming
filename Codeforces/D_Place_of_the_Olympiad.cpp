#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;

    ll left = 1, right = m,ans = right;
    while(left <= right){

        ll mid = left + (right - left) / 2;
        ll cnt = 0;
        for(int i=0;i<n;i++){
            cnt += min(m, k - cnt * mid) / mid;
        }

        if (cnt >= k) {
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
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
 