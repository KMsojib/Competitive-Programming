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
        int cn=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='4' or s[i]=='7'){
                cn++;
            }
        }
        if(cn==7 or cn==4){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
