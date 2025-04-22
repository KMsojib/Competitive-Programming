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
        cin>>s;

        int cn=0;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U'){
                cn++;
            }
        }
        cout<<cn<<endl;
    }

    return 0;
}
