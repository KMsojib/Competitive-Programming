#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
    fast_io;
    int t = 1; // cin>>t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n % k == 0)
        {
            cout << n << endl;
        }
        else
        {
            cout << n / k << endl;
        }
    }

    return 0;
}
