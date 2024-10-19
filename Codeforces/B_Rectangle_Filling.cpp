#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int n, int m, vector<vector<char>> &grid, char ch)
{
    // First column
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (grid[i][0] == ch)
        {
            ok = true;
            break;
        }
    }
    if (!ok)
    {
        return false;
    }
    ok = false;
    // Last column
    for (int i = 0; i < n; i++)
    {
        if (grid[i][m - 1] == ch)
        {
            ok = true;
            break;
        }
    }
    if (!ok)
    {
        return false;
    }
    ok = false;

    // first row
    for (int i = 0; i < m; i++)
    {
        if (grid[0][i] == ch)
        {
            ok = true;
            break;
        }
    }
    if (!ok)
    {
        return false;
    }
    ok = false;
    // last row
    for (int i = 0; i < m; i++)
    {
        if (grid[n - 1][i] == ch)
        {
            ok = true;
            break;
        }
    }
    if (!ok)
    {
        return false;
    }
    return true;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            grid[i][j] = s[j];
        }
    }
    bool ans = check(n, m, grid, 'W') || check(n, m, grid, 'B');
    if (ans)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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
