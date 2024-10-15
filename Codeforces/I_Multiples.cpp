#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a % b == 0 or b % a == 0)
    {
        cout << "Multiples" << nline;
    }
    else
    {
        cout << "No Multiples" << nline;
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
