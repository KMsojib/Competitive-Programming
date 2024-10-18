#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        string s;   cin>>s;
        bool cn=1;
        if(s[0]>='A' && s[0]<='Z'){
            for(int i=1;i<s.size();i++){
                if(s[i]<'a' || s[i]>'z'){
                    cn=0;
                    break;
                }
            }
        }
        else{
            cn=0;
        }
            
        if(cn==1){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }

    return 0;
}
