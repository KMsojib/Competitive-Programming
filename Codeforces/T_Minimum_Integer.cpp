#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll l,r,d;   cin>>l>>r>>d;
    if(l>d or d>r){
        cout<<d<<endl;
    }
    else{
        int div = r/d;
        div++;
        cout<<(div*d)<<endl;
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
 