#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    if (n < 2){
        cout << 0 << endl;
    }
    else{
        cout << (n - 1) / 2 << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
