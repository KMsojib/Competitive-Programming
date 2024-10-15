#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int n;
    scanf("%d", &n);
    double ans = 0;
    int carrx = 0;
    int carry = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        ans += hypot(x - carrx, y - carry);
        carrx = x;
        carry = y;
    }
    ans += hypot(carrx, carry);
    printf("%.10f\n", ans);
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
