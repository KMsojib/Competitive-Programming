#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int a[100005];
void solve(){
    ll n;   cin>>n;
    ll cn=0;
    for(int i=2; i<=n; i++){
        if(!a[i]){
            a[i]=++cn;
            for(int j=i; j<=n; j+=i){
                a[j]=cn;
            }
        }
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
