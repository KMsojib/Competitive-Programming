#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int x,y;    cin>>x>>y;
        cout<<(x-1)*y+1<<endl;
    }

    return 0;
}
