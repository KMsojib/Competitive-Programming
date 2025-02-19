#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    ///fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        vector<ll>x(n),y(n),z(n);
        vector<pair<ll,ll>>a,b,c;
        ///O(n)
        for(int i=0;i<n;i++){
            cin>>x[i];
            a.push_back(make_pair(x[i],i));
        }

        for(int i=0;i<n;i++){
            cin>>y[i];
            b.push_back(make_pair(y[i],i));
        }

        for(int i=0;i<n;i++){
            cin>>z[i];
            c.push_back(make_pair(z[i],i));
        }

        ///O(N log N)
        sort(a.begin(),a.end(),greater <> ());
        sort(b.begin(),b.end(),greater <> ());
        sort(c.begin(),c.end(),greater <> ());

        ///constant O(1)
        ll ans=0;
        for(ll i=0;i<3;i++){
            for(ll j=0;j<3;j++){
                for(ll k=0;k<3;k++){
                    if(a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second){
                        ans = max(a[i].first + b[j].first + c[k].first,ans);
                    }
                }
            }
        }
        cout<<ans<<"\n";

    }
    return 0;
}
