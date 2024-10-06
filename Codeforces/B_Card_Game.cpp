#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int x = (int(a1 > b1) - int(a1 < b1) + int(a2 > b2) - int(a2 < b2)) > 0;
    int y = (int(a1 > b2) - int(a1 < b2) + int(a2 > b1) - int(a2 < b1)) > 0;
    cout << (x + y) * 2 << '\n';
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
 