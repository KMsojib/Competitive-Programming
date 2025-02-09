#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    int best = -1;
    for (int i = 0; i < n; i++)
    {
        if (best <= a[i].second)
        {
            best = a[i].second;
        }
        else
        {
            best = a[i].first;
        }
    }
    cout << best << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
