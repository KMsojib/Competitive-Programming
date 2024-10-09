#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll t = 1;
    ll x;
    while (cin >> x && x != 0) {
        cout << "Case " << t << ": " << x << endl;
        t++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}