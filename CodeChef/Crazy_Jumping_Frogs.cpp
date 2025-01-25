#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int eve = 0, odd = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            eve++;
        }
        else
        {
            odd++;
        }
    }
    cout << max(odd, eve) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}