#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int x,y;    cin>>x>>y;
    if(x==1 and y==1){
        cout<<"Invalid\n";
    }
    else if(y== 1 and x==0){
        cout<<"No\n";
    }
    else{
        cout<<"Yes\n";
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
 