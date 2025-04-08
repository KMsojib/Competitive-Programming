#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin>>s;

    int cnt = 0, maxi = 0;
    for(auto ch : s){
        if(ch == '0'){
            cnt++;
        }
        else{
            maxi = max(maxi, cnt);
            cnt = 0;
        }
    }
    maxi = max(maxi, cnt);
    cout<<s.size() - maxi<<endl;
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
 