#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int n;  cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll cr_pr=1;
    ll last_pr=int(1e6);
    ll ans=0;
    for(int i=0;i<n;i++){
        ll x=abs(cr_pr-a[i]);
        ll y=abs(last_pr-a[i]);
        ans=max(ans,min(x,y));
    }
    cout<<ans<<"\n";
    return 0;
}
