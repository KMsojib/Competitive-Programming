#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        mp[x]++;
    }
    int cn = 0;
    for(auto[x,y] : mp){
        cn = max(y,cn);
    }
    cout<<n-cn<<endl;
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
 