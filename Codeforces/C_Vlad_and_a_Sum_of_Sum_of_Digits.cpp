#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MAX = 200'007;
int ans[MAX];

ll dig(ll x)
{
    ll sum=0;
    while(x)
    {
        sum+=(x%10);
        x/=10;
    }
    return sum;
}

void solve(){
    ll n;   cin>>n;
    cout<<ans[n]<<"\n";
}

int main()
{
    fast_io;
     ans[0]=0;
    for(int i=1;i<MAX;i++)
    {
        ans[i]=ans[i-1]+dig(i);
    }
    int t;  cin>>t;
    while(t--){
       
        solve();
    }

    return 0;
}