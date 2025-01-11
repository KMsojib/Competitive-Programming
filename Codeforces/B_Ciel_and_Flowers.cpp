#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll r, g, b;
    scanf("%lld%lld%lld", &r, &g, &b);
    ll cnt = 0;
    for (int mix = 0; mix <= 2; mix++)
    {
        if (r >= mix && g >= mix && b >= mix)
        {
            ll remaining_r = r - mix;
            ll remaining_g = g - mix;
            ll remaining_b = b - mix;

            ll bouquets = mix;
            bouquets += remaining_r / 3;
            bouquets += remaining_g / 3;
            bouquets += remaining_b / 3;

            cnt = max(cnt, bouquets);
        }
    }
    printf("%lld", cnt);
    return 0;
}