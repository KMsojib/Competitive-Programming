#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    ll n,k; cin>>n>>k;
    vector<pair<int,int>>mp;
    for(int i=0;i<n;i++){
        int x,y;    cin>>x>>y;
        mp.push_back({x,y});
    }
    if(k==1 && mp[0].first == 1){
        cout<<mp[0].second<<endl;
    }
    else{
        ll ans=0;
        ll temp=1+k;
        for(int i=0;i<n;i++){
            ans+=(mp[i].second - temp);
            temp+=mp[i].first;
        }
        cout<<ans+1<<endl;
    }
}

int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
