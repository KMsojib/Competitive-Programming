#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n,m,a,b;    cin>>n>>m>>a>>b;

        if(m*a <= b){
            cout<<n*a<<endl;
        }
        else{
            int ans2 = (n/m)*b + min((n%m)*a,b);
            cout<<ans2<<endl;
        }
    }

    return 0;
}
