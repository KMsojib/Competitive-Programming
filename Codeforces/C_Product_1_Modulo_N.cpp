#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    ll n;
    cin >> n;
    vector<ll> val;

    ll prd = 1;
    for (ll i = 1; i <= n; i++)
    {
        if (__gcd(n, i) == 1)
        {
            val.push_back(i);
            prd = (prd * i) % n;
        }
    }

    if (prd == 1)
    {
        cout << val.size() << nline;
        for (auto x : val)
            cout << x << " ";
    }
    else
    {
        cout << val.size() - 1 << nline;
        for (auto x : val)
        {
            if (x != prd)
            {
                cout << x << " ";
            }
        }
        cout << nline << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1; // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
