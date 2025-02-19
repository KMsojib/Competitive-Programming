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
        vector<int> a(n + 1);
        unordered_map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            mp[a[i]] = i;
        }
        int ans = 3;
        bool f = false;
        for (int i = 1; i <= n; i++)
        {
            if (mp[i] == a[i])
            {
                f = true;
                break;
            }
        }
        if (f == true)
        {
            ans=2;
        }
        cout<<ans<<endl;
    }

    return 0;
}
