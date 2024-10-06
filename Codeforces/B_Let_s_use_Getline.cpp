#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        string s;
        getline(cin,s);
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='['+1){
                break;
            }
            else{
                cout<<s[i];
            }
        }
        
    }

    return 0;
}
