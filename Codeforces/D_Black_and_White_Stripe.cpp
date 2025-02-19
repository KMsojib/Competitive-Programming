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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> ans(n + 1);
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == 'W')
            {
                ans[i] = ans[i - 1] + 1;
            }
            else
            {
                ans[i] = ans[i - 1];
            }
        }

        int result = INT_MAX;
        for (int i = k; i <= n; i++)
        {
            result = min(result, ans[i] - ans[i - k]);
        }
        cout << result << endl;
    }

    return 0;
}
