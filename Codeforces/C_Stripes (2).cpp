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
        vector<string> vp;
        for (int i = 0; i < 8; i++)
        {
            string temp;
            cin >> temp;
            vp.push_back(temp);
        }

        char ch;
        int cn = 0;
        for (int i = 0; i < 8; i++)
        {
            cn=0;
            string s = vp[i];
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == 'R')
                {
                    cn++;
                }
            }
            if (cn == 8)
            {
                break;
            }
        }

        if (cn == 8)
        {
            cout << "R" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }

    return 0;
}
