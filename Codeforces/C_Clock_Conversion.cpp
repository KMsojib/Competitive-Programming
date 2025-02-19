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
        string s;
        cin >> s;
        // 0-11 AM
        // 12-23 PM
        string x = "AM";

        int hours = ((s[0] - '0') * 10 + s[1] - '0');
        int minute = ((s[3] - '0') * 10 + s[4] - '0');

        if (hours >= 12)
        {
            hours -= 12;
            x = "PM";
        }

        if (hours == 0)
        {
            hours = 12;
        }
        if (hours < 10)
        {
            cout << "0";
        }
        cout << hours << ":";
        if (minute < 10)
        {
            cout << "0";
        }
        cout << minute << " " << x << endl;
    }

    return 0;
}
