#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll l,r; cin>>l>>r;
    int peak = l, size = 1;
    while(peak*2 <= r){
        size ++;
        peak *=2;
    }

    peak /= l;
    int ans = r / peak - l + 1;
    peak /= 2;
    peak *= 3;
    ans += max(0ll, (r / peak - l +1)*(size-1));
    cout<<size <<" "<<ans<<endl;
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
 