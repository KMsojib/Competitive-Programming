#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n,k;    cin>>n>>k;
        ll sum1 = 0, sum2 = 0;
        for(int i=0;i<n;i++){
            ll x;   cin>>x;
            sum1 += x;
        }

        for(int j=0;j<k;j++){
            ll y;   cin>>y;
            sum2 += y;
        }

        if(sum1 == sum2){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }


    return 0;
}
