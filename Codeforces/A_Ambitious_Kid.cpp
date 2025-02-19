#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    ll n;   cin>>n;
    vector<int>a(n);
    bool f=false;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==0){
            f=true;
        }
        if(a[i]<0){
            a[i]*=-1;
        }
    }

    if(f){
        cout<<"0\n";
    }
    else{
        ll x = *min_element(a.begin(),a.end());
        cout<<x<<endl;
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
