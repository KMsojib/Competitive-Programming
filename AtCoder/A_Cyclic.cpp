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
        cout<<s[1]<<s[2]<<s[0]<<" "<<s[2]<<s[0]<<s[1]<<endl;
    }

    return 0;
}
