#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    s += s;
    int cn = 0, k = 0;
    for (auto ch : s)
    {
        cn = (ch == '1' ? cn + 1 : 0);
        k = max(cn, k);
    }
    if (k > n)
    {
        cout << (ll)n * n << endl;
    }
    else
    {
        ll size_a = (k + 1) / 2;
        ll side_b = (k + 2) / 2;
        cout << size_a * side_b << endl;
    }
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
