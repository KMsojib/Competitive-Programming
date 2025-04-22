#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n;  cin>>n;
        ll ans=0;
        for(int i=0;i<n;i++){
            ll x;   cin>>x;
            ans = max(ans,x);
        }
        cout<<ans<<endl;
    }

    return 0;
}
