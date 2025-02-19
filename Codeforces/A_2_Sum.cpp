#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n,x;     cin>>n>>x;
        vector<ll>a(n);
        map<ll,bool>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]] = true;
        }
        ll crn = x;
        bool f = false;
        for(int i=0;i<n;i++){
            ll temp = crn - a[i];
            if(mp[temp] && temp != a[i]){
                f = true;
                break;
            }
            else{
                continue;
            }
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
