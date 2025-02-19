#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool ok = false;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i - 1])
            {
                ok = true;
                swap(s[i], s[i - 1]);
            }
        }
        if (ok)
        {
            cout << "YES\n";
            cout << s << endl;
        }
        else
        {

            cout << "NO\n";
        }
    }

    return 0;
}
