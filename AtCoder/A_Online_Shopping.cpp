#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n,m,k;  cin>>n>>m>>k;
        ll sum=0;
        for(int i=0;i<n;i++){
            int x,y;    cin>>x>>y;
            sum+=(x*y);
        }

        if(sum<m){
            cout<<sum+k<<endl;
        }
        else{
            cout<<sum<<endl;
        }
    }

    return 0;
}
