#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;  cin>>n;
    if(n==1){
        cout<<1<<endl;
    }
    else if(n%2==0){
        int l = 1, r = 2;
        while(r<=n){
            cout<<r<<" "<<l<<" ";
            l+=2,r+=2;
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
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
