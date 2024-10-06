#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,s,m;  cin>>n>>s>>m;
    bool f = false;
    int time = 0;
    while(n--){
        int l,r;    cin>>l>>r;
        if((l-time) <= s){
            f = true;
            break;
        }
        else{
            time = r;
        }
    }
    cout<<(f == true ? "YES\n" : "NO\n");
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
 