#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    string s;
    cin >> s;
    vector<int> val(26);
    for (int i = 0; i < 26; i++)
    {
        val[s[i] - 'A'] = i;
    }

    int cn = 0;
    for (int i = 0; i < 25; i++)
    {
        cn += abs(val[i] - val[i + 1]);
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
