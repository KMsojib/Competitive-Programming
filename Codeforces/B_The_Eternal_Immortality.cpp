#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nline "\n"

int main()
{
    ll a,b;
    cin>>a>>b;
    if(b-a >= 10){
        cout<<"0"<<nline;
    }
    else{
        ll ans = 1;
        for(ll i = a+1; i<=b; i++){
            ans = (1ll*ans*(i%10))%10;
        }
        cout<<ans<<nline;
    }
    return 0;
}