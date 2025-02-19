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
        int a, b, c;
        cin >> a >> b >> c;
        int cn = 0;
        while (a <= b)
        {
            if (c % a == 0)
            {
                cn++;
                a++;
            }
            else
            {
                a++;
            }
        }
        cout << cn << endl;
    }

    return 0;
}
