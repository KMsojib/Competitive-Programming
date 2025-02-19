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
        string a, b;
        cin >> a >> b;
        string pa = "", pb = "";
        for (int i = 0; i < a.size(); i++)
        {
            char x = a[i], y = b[i];
            char maxo = max(x, y);
            char mini = min(x, y);

            if (pa >= pb)
            {
                pb += maxo;
                pa += mini;
            }
            else
            {
                pa += maxo;
                pb += mini;
            }
        }
        cout << pa << endl
             << pb << endl;
    }

    return 0;
}
