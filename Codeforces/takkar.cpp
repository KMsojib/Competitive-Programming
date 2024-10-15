#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int x;  cin>>x;
    int y; cin>>y;
    if(x>y){
        cout<<"MAGA!\n";
    }else if (y>x){
        cout<<"FAKE NEWS!\n";
    }else{
        cout<<"WORLD WAR 3!\n";
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
 