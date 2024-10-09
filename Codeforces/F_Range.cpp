#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int a,b,c;    cin>>a>>b>>c;
    if(a<b && b<c){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1; 
    while(t--){
        solve();
    }
    return 0;
}
 