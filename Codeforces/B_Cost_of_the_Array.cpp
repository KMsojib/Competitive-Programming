#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (n == k)
    {
        int flg = 0;
        for (int i = 2; i <= n; i += 2)
        {
            if (a[i] == i / 2)
            {
                flg = i / 2;
            }
            else
            {
                break;
            }
        }
        cout << ++flg << endl;
    }
    else
    {
        bool flag = true;
        for (int i = 2; i <= n - k + 2; i++)
        {
            flag &= a[i] == 1;
        }
        cout << (flag ? 2 : 1) << endl;
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
