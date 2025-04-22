#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
    fast_io;
    int t = 24; // cin>>t;
    while (t--)
    {
        string s, k;
        cin >> s >> k;
        size_t idx = s.find(k);
        if (idx != string::npos)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }

    return 0;
}
