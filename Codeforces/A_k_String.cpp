#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;
    map<char, int> mp;

    for (auto ch : s) {
        mp[ch]++;
    }

    bool ok = true;
    for (auto [x, y] : mp) {
        if (y % k != 0) {
            ok = false;
            break;
        }
    }

    if (!ok) {
        cout << "-1" << endl;
    } else {
        string base = "";
        for (auto [x, y] : mp) {
            base += string(y / k, x);
        }
        string ans = "";
        for (int i = 0; i < k; i++) {
            ans += base;
        }
        cout << ans << endl;
    }
    return 0;
}