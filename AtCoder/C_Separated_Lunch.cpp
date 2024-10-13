#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'

void dfs(int idx, int crn, vector<int> &a, int &ans, int &sum)
{
    // base case
    if (idx == a.size())
    {
        return;
    }

    // skip the idx value
    dfs(idx + 1, crn, a, ans, sum);

    // take it the idx vlaue
    crn += a[idx];
    ans = min(ans, max(crn, sum - crn));
    dfs(idx + 1, crn, a, ans, sum);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int ans = sum, crn = 0;
    dfs(0, crn, a, ans, sum);
    cout << ans << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1; // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
