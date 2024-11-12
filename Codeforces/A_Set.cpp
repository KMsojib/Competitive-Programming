#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int l, r, k;
    cin >> l >> r >> k;
    cout << max(r / k - l + 1, 0) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
