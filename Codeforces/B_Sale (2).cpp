#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;
    //cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            if (a[i] < 0)
            {
                sum += (a[i] * -1);
            }
            else
            {
                sum += a[i];
            }
        }
        cout << sum << endl;
    }

    return 0;
}

// Not accepted