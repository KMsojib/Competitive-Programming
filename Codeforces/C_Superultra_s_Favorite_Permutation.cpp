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
        ll n;
        cin >> n;
        if(n<5){
            cout<<"-1"<<endl;
        }
        else
        {
            vector<int> odd, eve;
            odd.push_back(4);
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                   if(i!=4){
                        odd.push_back(i);
                   }
                }
                else
                {
                    if(i!=5){
                        odd.push_back(i);
                    }
                }
            }
            odd.push_back(5);
            vector<int> ans;
            for (int i = 0; i < (int)odd.size(); i++)
            {
                ans.push_back(odd[i]);
            }
            for (int i = 0; i < (int)eve.size(); i++)
            {
                ans.push_back(eve[i]);
            }
            
            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
