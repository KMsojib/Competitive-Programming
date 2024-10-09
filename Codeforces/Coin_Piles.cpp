#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll a,b; cin>>a>>b;
    
    if((2*a-b)%3 || (2*a-b)<0 || (2*b-a)%3 || (2*b-a)<0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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
 