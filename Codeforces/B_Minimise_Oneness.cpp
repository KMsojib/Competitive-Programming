#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 1)
        {
            cout << '1';
        }
        else
        {
            cout << '0';
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
