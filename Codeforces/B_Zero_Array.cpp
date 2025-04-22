#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n; cin >> n;
    ll sum = 0;
    ll maxi = 0;
    for (int i = 0; i < n; i++) {
        ll a; cin >> a;
        sum += a;
        maxi = max(maxi, a);
    }
    if (sum % 2 == 1 || sum < 2 * maxi) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;  // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}