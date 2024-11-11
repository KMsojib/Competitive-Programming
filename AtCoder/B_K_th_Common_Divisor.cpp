#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    ll gcd = __gcd(a, b);
    vector<ll> div;
    for (int i = 1; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            div.push_back(i);
            if (i != (gcd / i))
            {
                div.push_back(gcd / i);
            }
        }
    }
    sort(div.begin(), div.end());
    int n = div.size();
    cout << div[n - k] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
