#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        string m,n; cin>>m>>n;
        if(m<n){
            cout<<m<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }

    return 0;
}
