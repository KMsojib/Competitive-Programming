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
        vector<ll>a(n),b(k);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        while(k--){
            ll x;   cin>>x;
            auto it = lower_bound(a.begin(),a.end(),x);
            if(it!=a.end()){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }

    return 0;
}
