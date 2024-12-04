#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &it : a) cin >> it;
    string s;
    cin >> s;

    long long sum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += (s[i] == 'B' ? a[i] : 0);
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            cnt -= a[i];
        } else {
            cnt += a[i];
        }
        sum = max(sum, cnt);
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            cnt += a[i];
        } else {
            cnt -= a[i];
        }
        sum = max(sum, cnt);
    }

    cout << sum << endl;
    return 0;
}
