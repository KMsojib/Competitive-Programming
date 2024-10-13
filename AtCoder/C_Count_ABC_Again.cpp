#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int tot = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (s.substr(i, 3) == "ABC")
        {
            tot++;
        }
    }
    while (q--)
    {
        int x;
        char c;
        cin >> x >> c;
        x--;
        for (int i = max(0, x - 2); i <= min(x, n - 3); i++)
        {
            if (s.substr(i, 3) == "ABC")
            {
                tot--;
                break;
            }
        }
        s[x] = c;
        for (int i = max(0, x - 2); i <= min(x, n - 3); i++)
        {
            if (s.substr(i, 3) == "ABC")
            {
                tot++;
                break;
            }
        }
        cout << tot << '\n';
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
