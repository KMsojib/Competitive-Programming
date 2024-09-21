#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,k;    cin>>n>>k;
    if(k == 10 ){
        if(n==1){
            cout<<"-1\n";
        }
        else{
            for(int i=0;i<n-1;i++){
                cout<<"1";
            }
            cout<<0<<endl;
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<<k;
        }
        cout<<endl;
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
 