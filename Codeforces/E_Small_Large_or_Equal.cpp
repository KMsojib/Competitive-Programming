#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int a,b;    cin>>a>>b;
    if(a>b){
        cout<<"a > b\n";
    }
    else if(a<b){
        cout<<"a < b\n";
    }
    else{
        cout<<"a == b\n";
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
 