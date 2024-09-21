#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,k;    cin>>n>>k;
    int str = n-k+1;
    ll cn = (str+n)*(n-str+1)/2;
    if(cn%2){
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
