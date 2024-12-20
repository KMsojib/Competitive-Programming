#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 100000009;

ll power(ll Xor, ll n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return Xor;
    }
    if (n % 2 == 0)
    {
        return (power(Xor, n / 2) * power(Xor, n / 2)) % mod;
    }

    return (((power(Xor, n / 2) * power(Xor, n / 2)) % mod) * Xor) % mod;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll Xor = a ^ b;
        ll ans = 1;
        cout << power(Xor, n) << endl;
    }
    return 0;
}
