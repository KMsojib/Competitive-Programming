#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    bool isInside = (x - r >= 0 && x + r <= W) && (y - r >= 0 && y + r <= H);
    if (isInside) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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

