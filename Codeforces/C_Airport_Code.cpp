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
        string s, t;
        cin >> s >> t;
        for (auto &x : t)
        {
            x = tolower(x);
        }
        //cout<<t<<endl;

        int cn=0;
        int idx = 0;
        string temp = "";
        for(int i=0;i<s.size();i++){
            if(s[i]==t[idx]){
                temp.push_back(s[i]);
                idx++;
            }
        }

        if(temp == t){
            cout<<"Yes\n";
        }
        else{
            temp.push_back('x');
            if(temp == t){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }

    return 0;
}
