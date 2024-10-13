#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    ll n;
    cin >> n;

    ll max1 = -1e9, max2 = -1e9;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        max1 = max(x, max1);
    }
    for (int j = 0; j < n; j++)
    {
        ll x;
        cin >> x;
        max2 = max(x, max2);
    }

    cout << max1 + max2 << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1; // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
