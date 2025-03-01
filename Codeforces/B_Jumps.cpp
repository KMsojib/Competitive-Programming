#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int64_t X;
    cin >> X;
    int64_t jumps = 0;
 
    while (X > 0)
        X -= ++jumps;
 
    if (X == -1)
        jumps++;
 
    cout << jumps << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}