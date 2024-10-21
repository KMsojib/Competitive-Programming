#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector < ll > v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (k == 1) {
        if (n == 2) cout << v[n - 1] * 2 + v[n - 2] * 2 << endl;
        else if (n == 3) cout << v[n - 1] * 2 + v[n - 2] + v[0] << endl;
        else cout << v[n - 1] * 2 + v[n - 2] + v[0] << endl;
    }

    else {
        cout << v[n - 1] + v[0] + v[n - 2] + v[n - k - 1] << endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}