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
        cout<<((ceil(log2(n)) == floor(log2(n)))?"TAK":"NIE")<<endl;
    }

    return 0;
}
