#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;  cin>>n;
    string s;   cin>>s;
    int ans = (s[0] == '1')? 0 : -1;
    for(int i=1;i<n;i++){
        ans += (s[i]!=s[i-1]);
    }
    cout<<max(ans,0)<<endl;
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
