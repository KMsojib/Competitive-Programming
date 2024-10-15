#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    string s;
    cin >> s;
    if ((s[0] - '0') % 2)
    {
        cout << "ODD" << nline;
    }
    else
    {
        cout << "EVEN" << nline;
    }
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
