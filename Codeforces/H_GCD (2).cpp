#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n,m; cin>>n>>m;
        cout<<__gcd(n,m)<<" "<<(n*m)/__gcd(n,m)<<endl; 
    }

    return 0;
}
