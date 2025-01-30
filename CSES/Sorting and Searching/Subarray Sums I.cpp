#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n,k;    cin>>n>>k;
        map<ll,ll>mp;
        mp[0] = 1;
        
        ll cn = 0;
        ll sum = 0;
        for(int i=0;i<n;i++){
            ll x;  cin>>x;
            sum += x;
            mp[sum]++;
            cn += mp[sum-k]; // if true then cn++.
            //cout<<"x: "<<x<<" sum: "<<sum<<" map[sum] : "<<mp[sum]<<" sum-k : "<<sum-k<<" cn : "<<cn<<endl;
        }
        cout<<cn<<endl;
    }
 
    return 0;
}