#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using lld = long double;
using ull = unsigned long long;

void solve(){
    ll x,y, ans=1;
    cin>>x>>y;
    for(int i=0;i<=32;i++){
        ll a = 1LL<<i;
        if((a&x) == (a&y)){
            ans*=2;
        }
        else{
            break;
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
 