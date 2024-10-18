#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<string> substring;
        for (int i = 0; i < s.size(); i++)
        {
            string temp = "";
            for (int j = i; j < s.size(); j++)
            {
                temp += s[j];
                substring.insert(temp);
            }
        }

        cout << substring.size() << endl;
    }

    return 0;
}
