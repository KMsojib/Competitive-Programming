#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    while (n > 0 && x && n / 2 + 10 < n)
    {
        n = n / 2 + 10;
        x--;
    }
    if (n <= y * 10)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
