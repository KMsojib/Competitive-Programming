#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll x1,y1;   cin>>x1>>y1;
    ll x2, y2;  cin>>x2>>y2;
    int dif = x2-x1;
    int dif2 = y2-y1;
    bool f = true;
    if((y1>=x1 && y2<=x2) || (x1>=y1 && x2<=y2)){
        f=false;
    }
    cout<<(f? "YES\n" : "NO\n");

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
