#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    ll n;   cin>>n;
    //vector<int>a(n);
    map<ll,ll>mp;
    for( int i=0; i<n; i++ ){
        ll x;  cin>>x;
        mp[x-i]++;
    }

    ll res=0;
    for(auto it : mp){
        res+=(it.second)*(it.second-1)/2;
    }

    cout<<res<<endl;   
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
