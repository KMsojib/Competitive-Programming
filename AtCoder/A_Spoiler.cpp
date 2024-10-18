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
        string a="",b="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='|'){
                break;
            }
            else{
                a+=s[i];
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='|'){
                break;
            }
            else{
                b+=s[i];
            }
        }
        reverse(b.begin(),b.end());
        cout<<a<<b<<endl;
    }

    return 0;
}
