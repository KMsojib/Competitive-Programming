#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        string s;   cin>>s;
        string t;   cin>>t;

        int idx = 0, n = (int)s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i] == '?')
            {
                if(idx<(int)t.size())
                {
                    s[i] = t[idx++];
                }
                else
                {
                    s[i] = 'k';
                }
            }
            else if(s[i] == t[idx])
            {
                idx++;
            }
            
        }

        if(idx>=t.size())
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
