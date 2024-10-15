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
    int cn = 0;
    int i = 1;
    while (i + 1 < n)
    {
        if (s[i - 1] == '#' && s[i] == '.' && s[i + 1] == '#')
        {
            cn++;
            i++;
        }
        else
        {
            i++;
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
