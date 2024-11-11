#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n, b, c;
    cin >> n >> b >> c;
    if (b == 0)
    {
        if (c == n - 2 || c == n - 1)
        {
            cout << n - 1 << endl;
        }
        else if (c < n - 2)
        {
            cout << -1 << endl;
        }
        else if (c >= n)
        {
            cout << n << endl;
        }
    }
    else
    {
        ll ans = n - max(0ll, ((n - c + b - 1) / b));
        cout << ans << endl;
    }
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
