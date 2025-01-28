#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    bool ok = true;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ll temp = max(i, n - i - 1);
        if (a[i] <= 2 * temp)
        {
            ok = false;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
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
