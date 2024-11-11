#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map<char, pair<int, int>> mp{
    {'N', {0, 1}},
    {'E', {1, 0}},
    {'S', {0, -1}},
    {'W', {-1, 0}}};

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    bool ok = false;
    int x = 0, y = 0;
    int i = 1000;
    while (i)
    {
        for (int i = 0; i < n; i++)
        {
            pair<int, int> vp = mp[s[i]];
            x += vp.first;
            y += vp.second;
            if (x == a && y == b)
            {
                ok = true;
                break;
            }
        }
        if (ok)
        {
            break;
        }
        i--;
    }
    if (ok)
    {
        cout << "YES" << endl;
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