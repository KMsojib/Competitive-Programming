#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
const int mod = 1e9 + 7;

ll power(ll b, ll e)
{
    ll res = 1;
    while (e > 0)
    {
        if (e % 2)
        {
            res = (res * b) % mod;
        }
        b = (b * b) % mod;
        e /= 2;
    }
    return res;
}
ll sum(ll n, ll k)
{
    ll res = 0;
    for (ll i = 1; i <= n; i++)
    {
        res = (res + power(i, k)) % mod;
    }
    return res;
}

int main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << sum(n, k) << endl;
    }

    return 0;
}
