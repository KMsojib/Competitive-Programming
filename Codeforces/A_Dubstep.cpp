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

        // WUB
        bool f = false;
        for (int i = 0; i < s.size();)
        {
            if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
            {
                i += 3;
                if(f){
                    cout<<" ";
                    f=false;
                }
            }
            else
            {
                cout<<s[i];
                i++;
                f=true;
            }
        }
        cout << endl;
    }

    return 0;
}
