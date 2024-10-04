#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll a[200040];
void solve(){
    ll n;   cin>>n;
    for(int i=0;i<2*n;i++)cin>>a[i];
    sort(a,a+2*n);
    cout<<a[n]-a[n-1]<<endl;
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
