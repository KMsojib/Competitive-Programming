#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 1;
        while (n > 3)
        {
            n /= 4;
            ans *= 2;
        }
        cout << ans << "\n";
    }
}