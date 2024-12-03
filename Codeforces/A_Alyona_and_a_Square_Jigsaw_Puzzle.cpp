#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        vector<int> a(n);
        ll cn = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll crn = 0;
        for (auto x : a)
        {
            crn += x;
            if (crn % 4 == 1)
            {
                ll sqrtt = sqrt(crn);
                if ( sqrtt*sqrtt == crn)
                {
                    cn++;
                }
            }
        }
        cout << cn << endl;
    }

    return 0;
}
