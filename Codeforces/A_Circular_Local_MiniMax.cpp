#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }
    sort(a.begin(), a.end());
    vector<int> b;
    for (int i = 0, j = n / 2; i < n / 2; i++, j++)
    {
        b.push_back(a[i]);
        b.push_back(a[j]);
    }
    b.push_back(b[0]);
    b.push_back(b[1]);
    bool ok = true;
    for (int i = 1; i < b.size() - 1; i++)
    {
        if (b[i] > b[i - 1] && b[i] > b[i + 1])
        {
            continue;
        }
        else if (b[i] < b[i - 1] && b[i] < b[i + 1])
        {
            continue;
        }
        else
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
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
