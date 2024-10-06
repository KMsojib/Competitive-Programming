#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
    fast_io;
    int t = 1; // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        ll sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        sum*=-1;
        cout<<sum<<endl;
    }

    return 0;
}
