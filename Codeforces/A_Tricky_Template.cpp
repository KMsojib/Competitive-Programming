#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    ll n;   cin>>n;
    string a;   cin>>a;
    string b;   cin>>b;
    string c;   cin>>c;

    bool f=false;
    for(int i=0;i<n;i++){
        if(a[i]!=c[i] && b[i]!=c[i]){
            f=true;
        }
    }
    if(f){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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
