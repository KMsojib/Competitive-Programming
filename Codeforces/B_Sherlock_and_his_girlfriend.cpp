#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int sieve[100005];

void solve(){
    int n;
    cin>>n;

    for(int i=2;i<=n;i++){
        if(sieve[i] == 0){
            for(int j = 2*i;j<=n+1;j+=i){
                sieve[j] = 1;
            }
        }
    }

    if(n>2){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }

    for(int i=2;i<=n+1;i++){
        if(sieve[i] == 0){
            cout<<1<<" ";
        }
        else{
            cout<<2<<" ";
        }
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
 