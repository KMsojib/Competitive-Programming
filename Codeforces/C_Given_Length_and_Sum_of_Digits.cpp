#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; // cin>>t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (m == 0)
        {
            if (n == 1)
            {
                cout << "0 0" << endl;
                return 0;
            }
            else
            {
                cout << "-1 -1" << endl;
                return 0;
            }
        }
        string s;
        for (int i = 0; i < n; i++)
        {
            int k = min(9, m);
            s.push_back('0' + k);
            m -= k;
        }
        if (m > 0)
        {
            cout << "-1 -1" << endl;
            return 0;
        }
        else
        {
            string mini = s;
            reverse(mini.begin(),mini.end());
            int j = 0;
            while (mini[j] == '0')
                j++;
            mini[0]++;
            mini[j]--;

            cout << mini << " " << s << endl;
        }
    }

    return 0;
}
