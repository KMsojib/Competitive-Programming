#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    vector<int> dp(4005, 0);

    sort(arr.begin(), arr.end());

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4005; j++)
        {
            if (dp[j] > 0 or j == 0)
            {
                if (arr[i] + j > 4000)
                {
                    break;
                }
                dp[j + arr[i]] = max(dp[j] + 1, dp[arr[i] + j]);
            }
        }
    }
    cout << dp[n] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
