#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    scanf("%lld", &n);
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    ll tot = accumulate(a.begin(), a.end(), tot);
    ll ans = LONG_LONG_MAX;
    for (int i = 0; i < 1 << n; i++)
    {
        ll sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += a[j];
            }
        }
        ll dif = abs((tot - sum) - sum);
        ans = min(ans, dif);
    }
    printf("%lld", ans);
    return 0;
}