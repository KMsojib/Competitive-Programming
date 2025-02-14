#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll x,y;
    cin>>x>>y;
    x++;
    if((x-y)%9 == 0 && x >= y){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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
 