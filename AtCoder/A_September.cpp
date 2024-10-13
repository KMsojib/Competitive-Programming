#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int cn = 0;
    for (int i = 1; i <= 12; i++)
    {
        string s;
        cin >> s;
        if ((int)s.size() == i)
        {
            cn++;
        }
    }
    cout << cn << nline;
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
