#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int dis = a + b + c;
        int full = n / dis;
        int tot_dis = full * dis;
        int cn = 0;
        if (tot_dis >= n)
        {
            cn = full * 3;
        }
        else
        {
            cn = full * 3;
            if (tot_dis + a >= n)
            {
                cn++;
            }
            else if (tot_dis + a + b >= n)
            {
                cn += 2;
            }
            else
            {
                cn += 3;
            }
        }
        cout << cn << endl;
    }
    return 0;
}