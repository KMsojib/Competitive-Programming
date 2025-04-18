#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string ch[10]={"","","2","3","223","5","53","7","7222","7332"};
    ll n;   cin>>n;
    string s;   cin>>s;

    string ans = "";
    for(int i=0; i<s.size(); i++){
        int x = s[i] - '0';
        ans += ch[x];
    }
    sort(ans.begin(), ans.end(), greater<char>());
    cout<<ans<<endl;
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
 