#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = n;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i <= k)
            {
                ans = min(ans, n / i);
            }
            if (n / i <= k)
            {
                ans = min(ans, i);
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}