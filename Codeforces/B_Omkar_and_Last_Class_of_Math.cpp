#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    int j = -1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        cout << 1 << ' ' << n - 1 << endl;
        return;
    }
    int a = n / j;
    int b = n - a;
    cout << a << ' ' << b << endl;
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
