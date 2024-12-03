#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    ll q;
    cin >> q;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    vector<int> b(m);
    for (auto &it : b)
        cin >> it;
    vector<ll> d(n + 1);
    for (int i = 0; i < n; i++)
    {
        d[a[i]] = i;
    }
    ll cnt = 0;
    map<ll, ll> mp;
    for (int i = 0; i < m; i++)
    {
        ll req = d[b[i]];
        if (mp.find(b[i]) != mp.end())
            continue;
        if (cnt == req)
        {
            cnt++;
            mp[b[i]] = true;
        }
        else
        {
            cout << "TIDAK" << endl;
            return;
        }
    }
    cout << "YA" << endl;
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

/*
another aproach will workd
*/