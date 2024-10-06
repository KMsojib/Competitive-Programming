#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }

        ll time = a[0] - 1;
        for (int i = 0; i < m - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                time += (n - (a[i] - a[i + 1]));
            }
            else
            {
                time += (a[i + 1] - a[i]);
            }
        }
        cout << time << endl;
    }

    return 0;
}
