#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    ll n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll x = a[n-1];
    ll maxi = x * n;
    n--;
    ll mini = x + (a[0] * n);
    cout << maxi - mini << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;  cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
