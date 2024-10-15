#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    string a, b;
    cin >> a >> b;
    string c, d;
    cin >> c >> d;

    if (b == d)
    {
        cout << "ARE Brothers" << nline;
    }
    else
    {
        cout << "NOT" << nline;
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
