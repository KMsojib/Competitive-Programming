#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n,x;    cin>>n>>x;
        int sum=0;
        for(int i=0;i<n;i++){
            int y;  cin>>y;
            if(y<=x){
                sum+=y;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
