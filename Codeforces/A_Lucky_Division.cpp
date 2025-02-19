#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES printf("YES\n")
#define NO printf("NO\n")
#define nl "\n"
#define mod 1000000007
#define in_range(a,b)    for(int i=a;i<b;i++)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
void solve()
{
    vector<int>a = {4,44,444,47,474,477,7,74,744,747};
    ll n;
    cin>>n;
    for(int i=0;i<a.size();i++)
    {
        if(n%a[i] == 0)
        {
            YES;
            return;
        }
    }
    NO;
}

int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}