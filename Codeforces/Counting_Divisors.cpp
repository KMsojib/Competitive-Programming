#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mex = 1e6 + 1;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    // fast_io;
    int all_div[mex] = {0};
    for (int i = 1; i < mex; i++)
    {
        for (int j = i; j < mex; j += i)
        {
            all_div[j] += 1;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << all_div[n] << endl;
    }

    return 0;
}