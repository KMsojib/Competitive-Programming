// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;
// #define nline '\n'
// void solve()
// {
//     ll n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     int maxi = -1, mini = INT_MAX;
//     ll ans = 0;
//     int idx = n - 1;
//     while (idx != k)
//     {
//         maxi = max(maxi, a[idx]);
//         mini = min(mini, a[idx]);
//         idx--;
//     }
//     ans += maxi + mini;
//     maxi = -1, mini = INT_MAX;
//     int i = 0;
//     while (i <= k)
//     {
//         maxi = max(maxi, a[i]);
//         mini = min(mini, a[i]);
//         i++;
//     }
//     ans += maxi + mini;
//     cout << ans << nline;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t = 1; cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll ans = 0;
    if (k > 1)
    {
        ans = a[n - 1] + a[n - 2];
        ans += a[n - k - 1] + a[0];
        cout << ans << endl;
    }
    else
    {
        ans = a[n - 1] * a[n - 1];
        ans += a[n - 2] + a[0];
        cout << ans << endl;
    }
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

