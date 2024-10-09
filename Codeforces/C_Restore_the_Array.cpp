#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
   int n ; 
    cin>>n; 
    int a[n+2]; a[0]=1e9+23; 
    a[n]=1e9+23;
    for (int i=1; i<n; i++) cin>>a[i]; 
    for (int i=1; i<=n; i++){
        cout<<min(a[i], a[i-1])<<" ";
    }
    cout<<endl;
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
 