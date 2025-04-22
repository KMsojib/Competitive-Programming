#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        ll choclate = (k%n);
        choclate = n - choclate;
        cout<<choclate<<endl;
    }

    return 0;
}
