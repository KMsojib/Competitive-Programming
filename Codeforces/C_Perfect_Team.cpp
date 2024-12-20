#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int c, m, a;
        cin >> c >> m >> a;
        int n = c + m + a;
        int l = 0, r = n / 3 + 1;
        while (l + 1 < r)
        {
            int mid = (l + r) / 2;
            if (mid <= c && mid <= m && 3 * mid <= n)
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        cout << l << endl;
    }
    return 0;
}