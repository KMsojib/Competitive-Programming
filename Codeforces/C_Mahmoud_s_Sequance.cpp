#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main() {
    fast_io;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_set<int> mod_sums;
    mod_sums.insert(0); // To handle the case where a single element is a multiple of k

    for (int i = 0; i < n; i++) {
        vector<int> new_sums;
        for (int sum : mod_sums) {
            int new_sum = (sum + a[i]) % k;
            if (mod_sums.count(new_sum)) {
                cout << "YES" << endl;
                return 0;
            }
            new_sums.push_back(new_sum);
        }
        for (int new_sum : new_sums) {
            mod_sums.insert(new_sum);
        }
    }

    cout << "NO" << endl;
    return 0;
}