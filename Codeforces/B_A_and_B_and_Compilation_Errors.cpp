#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin>>n;
    ll sum1 = 0;
    for(int i=0;i<n;i++){
        ll x;   cin>>x;
        sum1 += x;
    }
    ll sum2 = 0;
    for(int i=0;i<n-1;i++){
        ll x;   cin>>x;
        sum2 += x;
    }
    cout<<sum1-sum2<<endl;
    ll sum3 = 0;
    for(int i=0;i<n-2;i++){
        ll x;   cin>>x;
        sum3 += x;
    }
    cout<<sum2-sum3<<endl;
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
 