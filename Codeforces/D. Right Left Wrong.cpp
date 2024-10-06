#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
    ll n;
    cin>>n;
    ll a[n+1] = {0};
    for(int i=1;i<=n;i++){
        ll x;  cin>>x;
        a[i] = a[i-1] + x;
    }
    string temp;   cin>>temp;
    string s = '@'+temp;
    int l = 1, r = n;
    ll sum = 0;
    while(l<r){
        if(s[l] == 'L' && s[r] == 'R'){
            sum += a[r] - a[l-1];
            l++, r--;
        }
        else if(s[l] == 'R'){
            l++;
        }
        else{
            r--;
        }
    }
    cout<<sum<<endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
