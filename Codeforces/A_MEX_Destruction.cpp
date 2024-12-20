#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    int zero = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            zero = 0;
            break;
        }
    }
    if (zero)
    {
        cout << "0" << endl;
        return;
    }

    int cn = 0;
    int ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            if (!ok)
            {
                ok = 1;
                cn++;
            }
        }
        else
        {
            ok = 0;
        }
    }
    cout << min(cn, 2) << endl;
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
