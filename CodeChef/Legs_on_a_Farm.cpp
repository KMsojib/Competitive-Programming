#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  cin>>t;
    while(t--){
        int n;  cin>>n;
        int sum = n/4;
        n%=4;
        sum+=n/2;
        cout<<sum<<endl;
    }

    return 0;
}
