#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    for(auto &ch : s){
        if(ch == '6') ch = '9';
        else if(ch == '9') ch = '6';
    }
    cout<<s<<endl;
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
 