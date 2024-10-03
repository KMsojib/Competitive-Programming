#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;   cin>>n;
    ll sum = 0, second_val = 0, last_val = 0;
    for(int i=0;i<n-2;i++){
        ll x;   cin>>x;
        sum += x;
    }

    cin>>second_val;
    second_val -= sum;
    cin>>last_val;
    last_val -= second_val;
    cout<<last_val<<endl;
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
 