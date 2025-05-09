#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin>>s;
    int n = s.size() - 1, idx = n;

    for(int i=0;i<=n;i++){
        if(s[i] % 2 == 0){
            idx = i;
            if(s[n] > s[i]){
                break;
            }
        }
    }
    if(idx == n){
        cout<<"-1"<<endl;
    }
    else{
        swap(s[n],s[idx]);
        cout<<s<<endl;
    }
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
 