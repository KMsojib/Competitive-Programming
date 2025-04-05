#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,k;
    cin>>n>>k;
    string s(n-2,'a');
    s = s + 'b' + 'b';
    while(k--){
        next_permutation(s.begin(),s.end());
    }
    cout<<s<<endl;
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
 