#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int maxi = 0, mini = 100;
        char ch1, ch2;
        for (auto [x, y] : mp)
        {
            if (y > maxi)
            {
                maxi = y;
                ch1 = x;
            }
            if (y < mini)
            {
                mini = y;
                ch2 = x;
            }
        }
        if (maxi == mini)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] != ch1)
                {
                    s[i] = ch1;
                    break;
                }
            }
            cout << s << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == ch2)
            {
                s[i] = ch1;
                break;
            }
        }
        cout << s << endl;
    }

    return 0;
}
