
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

int mod_of(long long mod, long long a){
    return((a%mod+mod)%mod);
}

int main()
{
    fast_io;
    ll x,y; cin>>x>>y;
    ll n;   cin>>n;
    ll mod=1000000007; 
    int f=n%6;
    if(f==0){
        cout<<mod_of(mod,x-y);
    }
    else if(f==1){
        cout<<mod_of(mod,x);
    }
    else if(f==2){
        cout<<mod_of(mod,y);
    }
    else if(f==3){
        cout<<mod_of(mod,y-x);
    }
    else if(f==4){
        cout<<mod_of(mod,-1*x);
    }
    else if(f==5){
        cout<<mod_of(mod,-1*y);
    }

    return 0;
}
