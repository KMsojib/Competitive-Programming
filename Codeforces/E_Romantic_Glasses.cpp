#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<ll, bool> mp;
        std::vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        mp[0] = 1;
        ll sum = 0;
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            a[i] *= ((i % 2) ? -1 : 1);
            sum += a[i];
            if (mp[sum])
            {
                ok = true;
                break;
            }
            mp[sum] = true;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
