#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int x,y;    cin>>x>>y;
        x+=y;
        if(x+1>9){
            cout<<x-1<<endl;
        }
        else{
            cout<<x+1<<endl;
        }
    }

    return 0;
}
