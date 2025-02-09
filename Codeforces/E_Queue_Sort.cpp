#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    int idx = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[idx])
        {
            idx = i;
        }
    }

    bool ok = true;
    for (int i = idx + 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? idx : -1) << endl;
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
