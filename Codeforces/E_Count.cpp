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
        ll sum =0;
        for(int i=0;i<s.size();i++){
            sum+=s[i]-'0';
        }
        cout<<sum<<endl;
    }

    return 0;
}
