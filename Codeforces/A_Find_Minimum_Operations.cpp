#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,k;   cin>>n>>k;
    if(n<k or k==1){
        cout<<n<<endl;
    }
    else{
        int op = 0;
        while(n>0){
            op+=n%k;
            n/=k;
        }
        cout<<op<<endl;
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
 