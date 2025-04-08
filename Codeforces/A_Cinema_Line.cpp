#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll cnt25 = 0, cnt50 = 0, cnt100 = 0;

    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;

        if (no == 25)
        {
            cnt25++;
        }
        else if (no == 50)
        {
            if (cnt25 > 0)
            {
                cnt25--;
                cnt50++;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        else
        {
            if (cnt25 > 0 && cnt50 > 0)
            {
                cnt100++;
                cnt25--;
                cnt50--;
            }
            else if (cnt25 >= 3)
            {
                cnt25 -= 3;
                cnt100++;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
}