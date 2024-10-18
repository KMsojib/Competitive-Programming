#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    string s;
    cin >> s;
    for (auto x : s)
    {
        if (x - '0' == 7)
        {
            cout << "Yes" << nline;
            return;
        }
    }
    cout << "No" << nline;
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
