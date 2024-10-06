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

        string res = "";
        for(int i=0;i<s.size()-1; i++)
        {
            if(s[i]!=s[i+1])
            {
                res.push_back(s[i]);
            }
            else
            {
                if(i+2 < s.size()-1)
                {
                    i+=2;
                }
                else
                {
                    break;
                }
            }
        }
        if(s.size()%2)
        {
            res=s[s.size()-1];
        }
        sort(res.begin(),res.end());
        cout<<res<<endl;
    }

    return 0;
}
