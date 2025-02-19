#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        string n,m; cin>>n>>m;
        cout<<n.size()<<" "<<m.size()<<endl;
        cout<<n+m<<endl;
        char ch = n[0];
        n[0]=m[0];
        m[0]=ch;
        cout<<n<<" "<<m<<endl;
    }

    return 0;
}
