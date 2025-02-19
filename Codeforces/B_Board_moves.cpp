

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=0;
        for(ll i=1; i<=n/2; ++i){
            ans+=i*1ll*i;
        }
        cout<<ans*8<<endl;
    }

    return 0;
}
