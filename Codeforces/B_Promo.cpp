#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n,q;    cin>>n>>q;
        vector<ll>a(n),prefix(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end(),greater<int>());
        prefix[0]=a[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i];
        }

        while(q--){
            ll x,y;    cin>>x>>y;
            ll right_side = x-1;
            ll left_side = right_side-y;
            if(x == y){
                cout<<1ll*prefix[x-1]<<endl;
            }
            else{
                cout<<1ll*prefix[right_side]-prefix[left_side]<<endl;
            }
        }
    }

    return 0;
}
