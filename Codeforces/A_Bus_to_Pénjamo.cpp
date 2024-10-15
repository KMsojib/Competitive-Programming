#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }

    int set = 0, rem_pair = 0;
    int tot_set = 2 * k - sum;

    set += min(tot_set, sum);
    int ans = sum - set;
    ans /= 2;

    for (int arr : a)
    {
        rem_pair += arr / 2;
    }

    int rem = min(rem_pair, ans);
    set += rem * 2;

    cout << set << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
