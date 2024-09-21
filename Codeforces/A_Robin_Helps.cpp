#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,k;    cin>>n>>k;
    int zero = 0, gold = 0;
    int cn = 0;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        if(x==0){
            if(gold > 0){
                cn++;
                gold --;
            }
        }
        if(x>=k){
            gold += x;
        }
    }
    cout<<cn<<endl;
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
 