#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  ///cin>>t;
    while(t--){
        int n;  cin>>n;
        string s;   cin>>s;
        bool f=false;
        for(int i=0;i<n;i++){
            if(s[i]=='a' && s[i+1]=='b' || s[i]=='b' && s[i+1]=='a'){
                f=true;
                break;
            }
        }
        if(f){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }

    return 0;
}
