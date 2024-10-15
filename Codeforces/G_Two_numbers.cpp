#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int A, B;

    cin >> A >> B;
    float a = A/B;
    int f = floor(a);

    float b = A/B;
    int c = ceil(b);

    float x = A/B;
    int r = round(x);
    

    cout << "floor " << A << " / " << B << " = " << f << endl;
    cout << "ceil " << A << " / " << B << " = " << c << endl;
    cout << "round " << A << " / " << B << " = " << r << endl;
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
/*

*/