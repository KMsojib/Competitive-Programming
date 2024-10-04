#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;   cin>>s;

    map<char,int>mp;
    for(auto chr : s) mp[chr]++;
    int odd_cn = 0;
    for(auto[x,y] : mp){
        if(y%2){
            odd_cn ++;
        }
    }

    odd_cn -= k;
    if(odd_cn > 1){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";    }
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
