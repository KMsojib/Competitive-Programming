#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &it : a)
        {
            cin >> it;
        }
        for (auto &it : b)
        {
            cin >> it;
        }
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = a[i];
            if (i + 1 < n)
            {
                temp -= b[i + 1];
            }
            if (temp > 0)
            {
                maxi += temp;
            }
        }
        cout << maxi << endl;
    }
    return 0;
}