#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,x;    cin>>n>>x;
    int ans = 0, prev = 0;
    while(n--){
        int l,r;    cin>>l>>r;
        ans += r-l+1;
        ans += (l-prev - 1)%x;
        prev = r;
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


