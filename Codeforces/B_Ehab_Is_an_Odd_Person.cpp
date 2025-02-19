#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    ll n;   cin>>n;
    vector<int>a(n);
    bool e=false,o=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]&1){
            o=true;
        }
        else{
            e=true;
        }
    }

    if(e & o){
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
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
