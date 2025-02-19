#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin>>s;
    int cn = 0;
    string target = "hznu";
    size_t pos = s.find(target);
    while(pos != string::npos) {
        cn++;
        pos = s.find(target, pos + 1);
    }

    cout << cn << endl;
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
 