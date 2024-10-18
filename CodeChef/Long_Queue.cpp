#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    ll n;
    cin >> n;
    vector<int> a(n);
    ll sz = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sz = a[n - 1];
    sz = floor(sz/2);
    int idx = n - 2;
    int cn = 0;
    while (idx >= 0)
    {
        if (sz >= a[idx])
        {
            idx--;
            cn++;
        }
        else
        {
            break;
        }
    }
    cout << n - cn << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
