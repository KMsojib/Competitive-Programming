#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;   cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]++;
    }
    for(int i=1;i<n;i++){
        if(a[i]%a[i-1]==0 ){
            a[i]++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

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
/*
2 5 3 7 
2 3 4 
4 2 
*/