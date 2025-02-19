#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n,f,a,b;    cin>>n>>f>>a>>b;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll prev = 0, crn = INT_MAX;
        for(int i=0;i<n;i++){
            crn = min(a*(v[i]-prev),b);
            f-=crn;
            prev = v[i];
        }

        cout<<(f>0?"YES\n": "NO\n");
    }

    return 0;
}
