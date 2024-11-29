#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.size() % 2 != 0)
    {
        cout << "No" << endl;
        return 0;
    }
    else
    {
        bool ok = true;
        for (int i = 0; i < ((int)s.size() / 2); i++)
        {
            if (s[2 * i] != s[2 * i + 1])
            {
                ok = false;
            }
        }
        if (ok)
        {
            map<char, int> mp;
            for (auto ch : s)
            {
                mp[ch]++;
            }
            for (auto [x, y] : mp)
            {
                if (y != 2 && y != 0)
                {
                    ok = false;
                    break;
                }
            }
        }
        cout << (ok ? "Yes" : "No") << endl;
    }
    return 0;
}
