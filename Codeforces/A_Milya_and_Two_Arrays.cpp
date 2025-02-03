#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    bool ok = false;
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            st.insert(a[i] + b[j]);
            if (st.size() >= 3)
            {
                ok = true;
                break;
            }
        }
        if (ok)
            break;
    }
    if (ok)
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
