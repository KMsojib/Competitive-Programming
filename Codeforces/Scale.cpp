#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;    cin>>n>>k;
    vector<string>vp;
    for(int i=0;i<n;i++){
        string s;   cin>>s;
        vp.push_back(s);
    }

    for(int i=0;i<n;i+=k){
        for(int j=0;j<n;j+=k){
            cout<<vp[i][j];
        }
        cout<<endl;
    }
    
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
 