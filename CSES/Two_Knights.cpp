#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;   cin>>n;
    for(ll i=1;i<=n;i++){
        ll number_of_places = (i * i) * (i * i - 1) / 2;
        ll number_of_attacked = (4 * (i - 2) * (i - 1));
        cout<<number_of_places - number_of_attacked << endl;
    }
    return;
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
 