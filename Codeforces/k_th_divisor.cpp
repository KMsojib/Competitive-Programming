#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define in_range(a, b) for (int i = a; i < b; i++)
#define read(x) \
    int x;      \
    cin >> x
int main()
{
    fast_io;
    ll n, k;
    cin >> n >> k;
    vector<ll> ans;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (i != n / i)
                ans.push_back(n / i);
        }
    }
    sort(ans.begin(), ans.end());
    if (ans.size() < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans[k - 1] << endl;
    }
    return 0;
}