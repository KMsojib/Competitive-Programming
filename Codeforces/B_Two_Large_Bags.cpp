#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    vector<ll> pref(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[a[i]]++;
    }

    bool ok = true;
    for (int i = 1; i <= n; i++)
    {
        if (pref[i] > 2)
        {
            pref[i + 1] += (pref[i] - 2);
            pref[i] = 2;
        }
        if(pref[i] == 1){
            ok = false;
            break;
        }
    }

    if (!ok)
    {
        cout << "No" << endl;
    }
    else
    {
        for (auto it : pref)
        {
            if (it % 2 == 1)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "Yes" : "No") << endl;
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
