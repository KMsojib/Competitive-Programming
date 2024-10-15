#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
const int MOD = 1e9 + 7;
ll expeo(ll pow, ll val) {
    ll result = 1;
    while (val > 0) {
        if (val % 2 == 1) {
            result = (result * pow) % MOD;
        }
        pow = (pow * pow) % MOD;
        val /= 2;
    }
    return result;
}

void solve()
{
    ll n;  cin>>n;
    vector<ll>a(n),b(n);
    for(auto &it : a)   cin>>it;
    for(auto &it : b)   cin>>it;

    for(ll i=0;i<n;i++)
    {
        cout<<expeo(2,b[i])<<nline;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1; //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
