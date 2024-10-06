#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        string s;   cin>>s;
        ll ans=0;
        for(int i=1;i<n;i++){
            if(s[i]=='@'){
                ans++;
            }
            else if(s[i]=='*' && s[i+1]=='*'){
                break;
            }
            else if(s[i+1]=='*' && s[i+1]!='*'){
                i=i+1;
            }
        }

        cout<<ans<<endl; 
    }

    return 0;
}
