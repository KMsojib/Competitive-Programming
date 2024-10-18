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
        bool f= false;
        for(int i=1;i<s.size()-1;i++){
            f=false;
            if(s[i]>=s[i-1] && s[i]<=s[i+1]){
                f=true;
            }
            if(!f){
                cout<<"No\n";
                return 0;
            }
        }
        cout<<"Yes\n";
    }

    return 0;
}
