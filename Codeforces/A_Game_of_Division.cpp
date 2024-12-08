#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ok = false;
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            bool f = true;
            for (int j = 0; j < n; j++)
            {
                if (i != j && abs(a[i] - a[j]) % k == 0)
                {
                    f = false;
                    break;
                }
            }
            if (f)
            {
                ok = true;
                idx = i;
                break;
            }
        }
        if (ok)
        {
            cout << "YES" << endl;
            cout << idx + 1 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}