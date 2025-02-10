#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin>>s;
    int n = s.size();

    for(int i=0;i<n-2;i++){
        cout<<s[i];
    }
    cout<<'i'<<endl;
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
 