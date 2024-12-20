#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n, k;
    cin >> n >> k;

    map<int, int> mp;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        int maxi = max(x, y);
        int mini = min(x, y);
        a[i] = mini;
        mp[maxi]++;
    }

    ll ans = 0;
    for (auto[key, value] : mp) {
        if (value > k) {
            ans = key;
        }
    }

    cout << ans << endl;

    return 0;
}