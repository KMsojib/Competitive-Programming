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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(27, 0);

        for (int i = 0; i < n; i++)
        {
            freq[s[i]-'a']++;
        }
        
        bool f = true;
        for(auto val : freq)
        {
            if(val > k)
            {
                f = false;
                break;
            }
        }

        cout<<(f? "YES\n" : "NO\n");
    }

    return 0;
}
