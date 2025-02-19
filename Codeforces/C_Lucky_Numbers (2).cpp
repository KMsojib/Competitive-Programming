#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n;  cin>>n;
        //cout<<(pow(2,n+1)-2)<<endl;
        cout<<(2LL << n) - 2<<endl;
    }

    return 0;
}
