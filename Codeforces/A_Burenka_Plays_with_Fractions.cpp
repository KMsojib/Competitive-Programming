#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    a *= d;
    b *= c;
    if (a == b){
        cout << "0\n";
    }
    else{
        cout << ((a != 0 && b % a == 0) or (b != 0 && a % b == 0) ? "1\n" : "2\n");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
