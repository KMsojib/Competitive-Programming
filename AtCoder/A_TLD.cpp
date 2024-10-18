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
        int i=s.size()-1;
        string ans;
        while (s[i]!='.'){
            ans+=s[i];
            i--;
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<"\n";
        
    }

    return 0;
}
