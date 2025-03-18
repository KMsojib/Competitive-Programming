#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_ok(int x, int y)
{
    int z = x ^ y;
    return (y + z > x && x + z > y && x + y > z);
}

void solve()
{
    ll n;
    cin >> n;
    bool ok = false;
    for (int i = 1; i < n; i++)
    {
        if (is_ok(n, i))
        {
            cout << i << endl;
            ok = true;
            break;
        }
    }
    if(!ok){
        cout << -1 << endl;
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
