#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> freq;
        for (int x : a) {
            freq[x]++;
        }

        long long total_pairs = (1LL * n * (n - 1)) / 2;
        long long same_pairs = 0;

        for (auto[key, count] : freq) {
            if (count > 1) {
                same_pairs += (1LL * count * (count - 1)) / 2;
            }
        }

        cout << total_pairs - same_pairs << endl;
    }

    return 0;
}
