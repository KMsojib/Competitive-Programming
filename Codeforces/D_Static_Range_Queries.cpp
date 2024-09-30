#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n = 1e8+10;
vector<ll> val(n, 0); 
void solve(){

    int n,q;    cin>>n>>q;
    int maxi = 0;
    while(n--){
        int x,y,k;  cin>>x>>y>>k;
        val[x]+=k;
        val[y]-=k;
        maxi = max(maxi,y);
    }

    for(int i=1;i<=maxi;i++){
        val[i]+=val[i-1];
    }

    while(q--){
        int l,r;    cin>>l>>r;
        if(l==0){
            cout<<val[r]<<endl;
        }
        else{
            cout<<val[r]<<endl;
        }
    }
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 