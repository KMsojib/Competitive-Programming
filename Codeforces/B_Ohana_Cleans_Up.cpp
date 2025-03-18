#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin>>n;
    map<string,int>mp;
    int cnt = 0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mp[s]++;
        cnt = max(cnt,mp[s]);
    }
    cout<<cnt<<endl;
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
 