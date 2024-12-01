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
        std::vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        std::vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            c[i] = (a[i] - b[i]);
        }

        int x = *max_element(c.begin(), c.end());
        std::vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (x == c[i])
            {
                cout<<c[i]<<" ";
                ans.push_back(i + 1);
            }
        }
        cout<<endl;
        cout << ans.size() << endl;
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}