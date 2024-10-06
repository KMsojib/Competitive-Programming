#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int maxi = max(a, b);
        int mini = min(a, b);
        bool ok1 = false, ok2 = false;
        for (int i = mini; i <= maxi; i++)
        {
            if (i == c)
            {
                ok1 = true;
            }
            if (i == d)
            {
                ok2 = true;
            }
        }
        cout << ((ok1 && ok2) || (!ok1 && !ok2) ? "NO\n" : "YES\n");
    }
    return 0;
}
