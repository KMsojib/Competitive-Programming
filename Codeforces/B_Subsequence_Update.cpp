#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> b, c;
        for (int i = 0; i < r; i++)
        {
            b.push_back(a[i]);
        }
        for (int i = l - 1; i < n; i++)
        {
            c.push_back(a[i]);
        }
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());

        ll sum1 = 0, sum2 = 0;
        for (int i = 0; i < r - l + 1; i++)
        {
            sum1 += b[i];
            sum2 += c[i];
        }

        cout << min(sum1, sum2) << endl;
    }
    return 0;
}