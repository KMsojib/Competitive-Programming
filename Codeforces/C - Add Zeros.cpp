#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using lld = long double;
using ull = unsigned long long;
const ll mod=1000000007;

#define nline "\n"
bool assen(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool desen(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}


void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>a(n+1);
    map<ll,bool>mp;
    ll res = 0;
    for(int i=1;i<=n;++i){
        ll x;   cin>>x;
        a[i].first = x+i-1;
        a[i].second = i-1;
    }
    a[1].first = 0;
    //sort(a.begin(),a.end(),assen);
    sort(a.begin(),a.end());
    mp[n] = 1;
    for(int i=2;i<=n;i++){
        if(mp[a[i].first] == 1){
            ll x = a[i].first + a[i].second;
            mp[x] = 1;
        }
    }

    for(auto it : mp){
        if(it.second == 1){
            //cout<<it.first<<nline;
            res = it.first;
        }
    }
    cout<<res<<nline;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test_case=1;  cin>>test_case;
    while(test_case--){
        solve();
    }
    return 0;
}
