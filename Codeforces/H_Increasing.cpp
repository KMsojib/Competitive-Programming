#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ok = true;
        int i = 1;
        sort(a.begin(), a.end());
        while (i < n)
        {
            if (a[i] <= a[i - 1])
            {
                ok = false;
                break;
            }
            i++;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}