#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin>>n;
    ll q;
    cin>>q;
    vector<ll>vp(n);
    for(int i=0;i<n;i++){
        cin>>vp[i];
    }
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        ll temp1 = (i+1)*(n-i)-1;
        mp[temp1]++;

        if(i>0){
            ll temp2 = (n-i)*i;
            mp[temp2] += (vp[i]-vp[i-1]-1);
        }
    }
    while(q--){
        ll k;
        cin>>k;
        if(mp.find(k) == mp.end()){
            cout<<"0 ";
        }
        else{
            cout<<mp[k]<<" ";
        }
    }
    cout<<endl;
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
