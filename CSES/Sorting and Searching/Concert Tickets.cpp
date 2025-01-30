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
        int n, m;
        cin >> n >> m;
        vector<int> ticket(n), price(m);
        map<int, int> pending_ticke;
        for (int i = 0; i < n; i++)
        {
            cin >> ticket[i];
            pending_ticke[ticket[i]]++;
        }
 
        for (int j = 0; j < m; j++)
        {
            cin >> price[j];
        }
 
        for (int i = 0; i < m; i++)
        {
            auto it = pending_ticke.upper_bound(price[i]);
            if (it == pending_ticke.begin())
            {
                cout << "-1\n";
            }
            else
            {
                it--;
                cout << it->first << "\n";
                it->second -= 1;
                if (it->second == 0)
                {
                    pending_ticke.erase(it);
                }
            }
        }
    }
 
    return 0;
}