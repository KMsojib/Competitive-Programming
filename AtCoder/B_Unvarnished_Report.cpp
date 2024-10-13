#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    string s;
    cin >> s;
    string t;
    cin >> t;

    if (s == t)
    {
        cout << "0" << nline;
    }
    else
    {
        int n = (int)s.size();
        int m = (int)t.size();
        if (n > m)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] != t[i])
                {
                    cout << i + 1 << nline;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                if (t[i] != s[i])
                {
                    cout << i + 1 << nline;
                    break;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
