#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll Binary_search(ll n, ll l, ll r)
{
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll sum = ((mid * (mid + 1)) / 2);
        if (n >= sum)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

void solve()
{
    ll w, b;
    cin >> w >> b;
    w += b;
    ll l = 1, r = 1e9;
    cout << Binary_search(w, l, r) << endl;
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
