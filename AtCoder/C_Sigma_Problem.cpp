#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n;   cin>>n;
        ll sum = 0;
        for(int i=0;i<n;i++){
            ll x;   cin>>x;
            sum += x;
        }
        cout<<sum<<endl;
    }

    return 0;
}
