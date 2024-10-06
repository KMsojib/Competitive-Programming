#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,m;    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<m;i++){
        string a,b; cin>>a>>b;
        mp[a] = (a.size()<=b.size()? a: b);
    }
    for(int i=0;i<n;i++){
        string s;   cin>>s;
        cout<<mp[s]<<" ";
    }
    cout<<endl;
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

