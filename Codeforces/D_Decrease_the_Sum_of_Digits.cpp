#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,s; cin>>n>>s;
    ll sum=0;
    ll temp=n;
    while(temp>0){
        sum+=temp%10;
        temp/=10;
    }
    if(sum<=s){
        cout<<0<<endl;
        return;
    }
    ll ans=0;
    ll mul=1;
    for(ll i=0;i<18;i++){
        ll digit=(n/mul)%10;
        ll add=(10-digit)*mul;
        n+=add;
        ans+=add;
        sum=0;
        temp=n;
        while(temp>0){
            sum+=temp%10;
            temp/=10;
        }
        if(sum<=s){
            cout<<ans<<endl;
            return;
        }
        mul*=10;
    }
    cout<<ans<<endl;
    return;
}



int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}