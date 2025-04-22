#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n,m;    cin>>n>>m;
        if(n>m){
            cout<<"Champion\n";
            cout<<"Runner up\n";
        }
        else{
            cout<<"Runner up\n";
            cout<<"Champion\n";
        }
    }

    return 0;
}
