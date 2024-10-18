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
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
