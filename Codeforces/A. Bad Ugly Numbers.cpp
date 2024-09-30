#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;  cin>>n;
    if(n<2){
        cout<<"-1\n";
        return;
    }

    cout<<2;
    for(int i=0;i<n-1;i++){
        cout<<3;
    }
    cout<<endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    int t=1;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


