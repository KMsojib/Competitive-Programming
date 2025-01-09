#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, n;
    cin >> a >> b >> n;
    int dif = b - a;
    ll ans = a + (n - 1) * dif;
    cout << ans << endl;
    return 0;
}