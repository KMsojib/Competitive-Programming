#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin>>s;
    int n = s.size();
    string ans = "";
    reverse(s.begin(),s.end());
    for(auto ch : s){
        if(ch =='S'){
            ans += 'S';
        }
        else if(ch == 'L'){
            ans += 'R';
        }
        else if(ch == 'R'){
            ans += 'L';
        }
        else if(ch == 'B'){
            ans += 'B';
        }
    }
    cout<<ans<<endl;
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
 