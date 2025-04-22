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
        int n, m;
        cin >> n >> m;
        int cn_o = 0;
        while (n--)
        {
            for (int i = 0; i < m; i++)
            {
                int x;
                cin >> x;
                if (x == 0)
                {
                    cn_o++;
                }
            }
        }
        cout << cn_o << endl;
    }

    return 0;
}
