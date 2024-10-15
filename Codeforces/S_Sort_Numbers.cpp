#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    vector<int> a(3, 0);
    cin >> a[0] >> a[1] >> a[2];
    vector<int> b = a;
    sort(a.begin(), a.end());
    for (auto x : a)
        cout << x << nline;
    cout << nline;
    for (auto x : b)
        cout << x << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1; // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
