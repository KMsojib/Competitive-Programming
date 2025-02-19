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
        for(int i=0;i<s.size();i++){
            if(s[i]==','){
                cout<<" ";
            }
            else if(s[i]>='a' && s[i]<='z'){
                cout<<(char)toupper(s[i]);
            }
            else{
                cout<<(char)tolower(s[i]);
            }
        }
    }

    return 0;
}
