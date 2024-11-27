#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> q(N), r(N);
    for (int i = 0; i < N; ++i) cin >> q[i] >> r[i];
    int Q;
    cin >> Q;
    while (Q--) {
        int t, d;
        cin >> t >> d;
        --t;
        int b = d / q[t], c = d % q[t];
        int a = c <= r[t] ? b : b + 1;
        int ans = a * q[t] + r[t];
        cout << ans << "\n";
    }
}
