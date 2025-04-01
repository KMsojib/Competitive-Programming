#include <iostream>

#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int comp1_ones = 0;
    int comp2_ones = 0;
    int comp1_b_count = 0;
    int comp2_b_count = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            if (a[i] == '1') {
                comp1_ones++;
            }
        } else {
            if (a[i] == '1') {
                comp2_ones++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            comp2_b_count++;
            if (b[i] == '1') {
                comp2_ones++;
            }
        } else {
            comp1_b_count++;
            if (b[i] == '1') {
                comp1_b_count++;
            }
        }
    }

    if (comp1_ones <=  comp2_ones) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}