#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int x,y;
    cin>>x>>y;
    int a,b;
    cin>>a>>b;

    b = min(b, a+a);
    if(x<y){
        swap(x,y);
    }

    cout<<y*b+(x-y)*a)<<endl;
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
