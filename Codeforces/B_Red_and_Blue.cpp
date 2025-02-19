#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
ll pref[205];
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll m;   cin>>m;
        vector<ll>b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        partial_sum(a.begin(), a.end(), a.begin());
	    partial_sum(b.begin(), b.end(), b.begin());

        ll ans=max(1ll*0, *max_element(a.begin(), a.end())) + max(1ll*0, *max_element(b.begin(), b.end()));
        cout<<ans<<endl;
    }

    return 0;
}
