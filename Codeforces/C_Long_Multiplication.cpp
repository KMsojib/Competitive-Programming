#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        string s,x;
        cin>>s>>x;

        sort(s.begin(),s.end(),greater<>());
        sort(x.begin(),x.end(),greater<>());
        cout<<s<<endl;
        cout<<x<<endl;
    }

    return 0;
}
