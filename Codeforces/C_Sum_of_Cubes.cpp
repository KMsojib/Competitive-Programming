#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1'000'000'000'000L;
unordered_set<ll> cubes;

void makeCube()
{
    for (ll i = 1; i * i * i <= N; i++)
    {
        cubes.insert(i * i * i);
    }
}

void solve()
{
    ll n;
    cin >> n;
    bool ok = false;
    for (ll i = 1; i * i * i <= n; i++)
    {
        ll x = n - i * i * i;
        if (cubes.find(x) != cubes.end())
        {
            ok = true;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    makeCube();
    while (t--)
    {
        solve();
    }
    return 0;
}
