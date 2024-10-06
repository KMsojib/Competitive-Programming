#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int x,y,k;  cin>>x>>y>>k;
    int X = (x+k-1)/k;
    int Y = (y+k-1)/k;

    if(X<=Y){
        cout<<2*Y<<endl;
    }
    else{
        cout<<2*X-1<<endl;
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
 