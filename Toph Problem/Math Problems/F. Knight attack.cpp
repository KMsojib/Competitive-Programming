#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n = 3, m = 3;
    bool ok = false;
    char grid[3][3];
    vector<pair<int, int>> move = {{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-2, 1}, {-2, -1}, {-1, 2}, {-1, -2}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == 'h')
            {
                for (int k = 0; k < 8; k++)
                {
                    int n_r = i + move[k].first;
                    int n_c = j + move[k].second;
                    if (n_r >= 0 && n_r < 3 && n_c >= 0 && n_c < 3 && grid[n_r][n_c] == 'h')
                    {
                        ok = true;
                        break;
                    }
                }
            }
        }
        if (ok)
        {
            break;
        }
    }
    if (ok)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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

/*
row = i , col = j

if (grid[i + 2][j + 1] == 'h' || grid[i + 2][j - 1] == 'h' || grid[i + 1][j + 2] == 'h' || grid[i + 1][j - 2] == 'h' || grid[i - 2][j + 1] == 'h' || grid[i - 2][j - 1] || grid[i - 1][j + 2] == 'h' || grid[i - 1][j - 2] == 'h')
                {
                    ok = true;
                    break;
                }

i+1,j+2 (1,2) 1
i+2,j+1 (2,1) 1
i-2,j+1 (-2,1) 1
i-1,j+2 (-1,2) 1
i-1,j-2 (-1,-2) 1
i-2,j-1 (-2,-1) 1
i+1,j-2 (1,-2) 1
i+2,j-1 (2,-1) 1

1 2 3
4 5 6
7 8 9

*/
