#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nline "\n"



int main()
{
    ll n;
    cin >> n;
    ll cn = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                cn += __gcd(i, __gcd(j, k));
            }
        }
    }
    cout << cn << nline;
    return 0;
}