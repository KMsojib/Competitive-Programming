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
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int tot = min(a,m)+min(b,m);
        int rm1 = m-min(a,m);
        int rm2 = m-min(b,m);

        tot += min(c,rm1+rm2);
        cout<<tot<<endl;
    }

    return 0;
}
