#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string text;
    getline(cin, text);

    map<char, int> mp;
    for (auto ch : s)
    {
        if (ch != ' ')
        {
            mp[ch] += 1;
        }
        else
        {
            continue;
        }
    }
    bool ok = true;
    for (auto ch : text)
    {
        if (!mp[ch] && ch != ' ')
        {
            ok = false;
            break;
        }
        else
        {
            mp[ch]--;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}