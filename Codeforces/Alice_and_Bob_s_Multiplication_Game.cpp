#include <bits/stdc++.h>
using namespace std;

long long mul(long long a, long long b)
{
    long long result = 0;
    while (b > 0)
    {
        if (b & 1)
            result += a;
        a <<= 1;
        b >>= 1;
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; // cin>>t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        cout << mul(x, y) << endl;
    }

    return 0;
}