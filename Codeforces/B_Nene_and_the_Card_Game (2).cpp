#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;  cin>>n;
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            int x;  cin>>x;
            mp[x]++;
        }

        ll cn =0;
        for(auto it : mp){
            if(it.second == 2){
                cn++;
            }
        }
        cout<<cn<<endl;
    }

    return 0;
}
