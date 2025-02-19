#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    ll n;   cin>>n;
    string s;   cin>>s;
    ll ans=0;
    int f=0,f2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            f=i;
            break;
        }
    }
    for(int i=n;i>=0;i--){
        if(s[i]=='B'){
            f2=i;
            break;
        }
    }
    ans=(f2-f)+1;
    cout<<ans<<endl;
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
