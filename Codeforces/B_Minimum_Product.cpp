#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    long long ans = 1e18;
    for (int i = 0; i < 2; ++i)
    {
        int da = min(n, a - x);
        int db = min(n - da, b - y);
        ans = min(ans, (a - da) * 1ll * (b - db));
        swap(a, b);
        swap(x, y);
    }
    cout << ans << endl;
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
