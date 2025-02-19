#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
    fast_io;
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    vector<int> c;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    int l = 0, r = 0;
    while (l < n || r < m)
    {
        if (r == m || l < n && a[l] < b[r])
        {
            c.push_back(a[l]);
            l++;
        }
        else
        {
            c.push_back(b[r]);
            r++;
        }
    }

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}
