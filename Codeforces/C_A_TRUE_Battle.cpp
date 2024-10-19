#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 1;
    bool ok = false;
    while (i < n - 1)
    {
        if (s[i - 1] == '1' and s[i] == '1')
        {
            ok = true;
            break;
        }
        i++;
    }

    if (ok or s[0] == '1' or s[n - 1] == '1')
    {
        cout << "YES" << nline;
    }
    else
    {
        cout << "NO" << nline;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
