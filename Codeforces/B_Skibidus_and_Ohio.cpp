#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin>>s;
    int n = s.size();

    bool ok = true;
    for(int i=0;i<n-1;i++){
        if(s[i] == s[i+1]){
            ok = false;
            break;
        }
    }
    if(ok){
        cout<<n<<endl;
    }
    else{
        cout<<1<<endl;
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
 