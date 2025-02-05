#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin>>s;
    while(!s.empty() && s.back() =='0'){
        s.pop_back();
    }
    bool ok = true;
    for(auto ch : s){
        if(ch == '0'){
            ok = false;
            break;
        }
    }
    cout<<(ok ? "yes" : "no") << endl;
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
 