#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        ans += a[i];
    }
    while (a.size() > 1)
    {
        vector<ll> temp;
        for (int i = 0; i < a.size() - 1; ++i)
        {
            temp.push_back(a[i + 1] - a[i]);
        }

        if (accumulate(temp.begin(), temp.end(), 0) < 0)
        {
            for (int i = 0; i < temp.size(); ++i)
            {
                temp[i] = (-1) * temp[i];
            }
        }

        ans = max(ans, accumulate(temp.begin(), temp.end(), 1ll * 0));
        reverse(a.begin(), a.end());
        a = temp;
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
