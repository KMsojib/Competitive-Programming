#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    ll n;   cin>>n;
    ll m=(n+2)/2;
    cout<<m<<endl;
    for(int i=1; i<=n; i++){
        cout<<(i+1)/2<<" "<<(i+2)/2<<endl;
    }
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
