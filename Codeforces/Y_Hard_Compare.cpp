#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a > c && a > d)
    {
        cout << "YES" << nline;
    }
    else if (a > c && b == d)
    {
        cout << "YES" << nline;
    }
    else
    {
        cout << "NO" << nline;
    }
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
