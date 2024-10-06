#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        if(n==1){
            cout<<"1\n";
        }
        else{
            ll sum=1;
            n-=2;
            sum+=n*(n+1);
            cout<<sum<<"\n";
        }
    }

    return 0;
}
