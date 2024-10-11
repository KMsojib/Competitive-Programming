#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;   cin>>n;
    ll mul = 1;
    for(int i=0;i<n;i++){
        ll x;   cin>>x;
        mul*=x%10;
    }
    if(mul>10){
        cout<<mul%10<<endl;
    }else{
        cout<<mul<<endl;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 