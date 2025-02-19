#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cn =  (s[0] == '1' ? 1 : 0);
    for(int i=1;i<n;i++){
        if(s[i-1] != s[i]){
            cn++;
        }
    }
    cout<<cn<<endl;
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
 