#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(auto &it : a)   {cin>>it;}
    bool ok = true;
    int i=1;
    while(i<n){
        if(a[i-1]>a[i] && abs(a[i]-a[i-1])==1){
            a[i]^=a[i-1];
            a[i-1]^=a[i];
            a[i]^=a[i-1];
            i++;
        }
        else if(a[i-1]<=a[i]){
            i++;
        }
        else{
            ok = false;
            break;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
 