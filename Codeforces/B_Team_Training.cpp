#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    sort(a.begin(), a.end(), greater<int>());
    int ans = 0, mem = 0, skill = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mem++;
        skill = min(skill, a[i]);
        if (skill * mem >= x)
        {
            ans++;
            mem = 0;
            skill = INT_MAX;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}