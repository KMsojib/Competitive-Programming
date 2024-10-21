#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a >= b)
    {
        cout << a << nline;
    }
    else
    {
        int dif = b - a;
        if (a - dif > 0)
        {
            cout << a - dif << nline;
        }
        else
        {
            cout << "0\n";
        }
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
