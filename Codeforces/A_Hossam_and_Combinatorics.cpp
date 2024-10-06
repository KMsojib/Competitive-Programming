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
        vector<ll>a(n);
        ll maxo=0,mini=INT_MAX,maxo_cn = 0,mini_cn =0;
        for (int i = 0; i < n; i++){
            cin>>a[i];
            maxo = max(maxo,a[i]);
            mini = min(mini,a[i]);
        }

        for(int i=0;i<n;i++){
            if(a[i]==maxo){
                maxo_cn++;
            }
            if(a[i]==mini){
                mini_cn++;
            }
        }
        ll ans=0;
        if(mini == maxo){
            ans = (n*(n-1));
        }
        else{
            ans = 2LL*(mini_cn*(maxo_cn));
        }  
        cout<<ans<<endl;
    }

    return 0;
}
