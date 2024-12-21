#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nline "\n"

int main()
{
    ll k;
    cin >> k;
    vector<int> eve, odd;
    for (int i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            eve.push_back(x);
        }
        else
        {
            odd.push_back(x);
        }
    }

    if (eve.size() == 1 && odd.size() == 1)
    {
        cout << "-1" << nline;
    }
    else
    {
        ll odd_sum = 0, eve_sum = 0;
        sort(odd.begin(), odd.end());
        sort(eve.begin(), eve.end());
        ll n = odd.size(), m = eve.size();
        if (n - 2 >= 0)
            odd_sum = odd[n - 1] + odd[n - 2];
        if (m - 2 >= 0)
            eve_sum = eve[m - 1] + eve[m - 2];
        cout << max(odd_sum, eve_sum) << nline;
    }
    return 0;
}
