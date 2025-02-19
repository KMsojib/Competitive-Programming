#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)


const int N= 1e7;
vector<ll>prime;
int vis[N];

void sive(){
    for(ll i=3; i<=N; i+=2){
        if(vis[i] == 0){
            for(ll j=i*i; j<=N ; j+=2*i){
                vis[j]=1;
            }
        }
    }
    prime.push_back(4);
    for(ll i=3; i<=N; i+=2){
        if(vis[i] == 0){
            prime.push_back(i*i);
        }
    }
}


bool is_prime(ll n){
    if(x<2)     return false;
    if(x==2)    return true;
    if(x%2==0)  return false;

    for(int i=3; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void solve(){
    ll n;   cin>>n;
    //sive();
    ll x=sqrt(n);
    if(x*x==n && is_prime(n)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}

int main()
{
    fast_io;
    ll t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
