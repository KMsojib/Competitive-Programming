#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;    cin>>n>>m;
    string s;   cin>>s;
    vector<int>idx(m);
    for(auto &x : idx){
        cin>>x;
    }
    string c;   cin>>c;

    set<int>st(idx.begin(),idx.end());
    sort(c.begin(),c.end());
    int i=0;
    for(auto x : st){
        s[x-1] = c[i++];
    }
    cout<<s<<endl;
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
 