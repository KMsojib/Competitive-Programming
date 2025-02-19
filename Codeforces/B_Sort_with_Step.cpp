#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
void solve(){
    ll n,k;
    cin>>n>>k;
    int cn=0;
    for(int i=1;i<n+1;i++){
        int x;  cin>>x;
        if((x-i)%k){
            cn++;
        }
    }
    if(cn == 0) cout<<"0\n";
    else if(cn == 2)    cout<<"1\n";
    else    cout<<"-1\n";

}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
