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

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    vector<int> ans;
    int j = 0;
    for (int i = 0; i < m; i++)
    {
        while (j < n && a[j] < b[i])
        {
            j++;
        }
        ans.push_back(j);
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
