#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        double pi = 3.141592653589793;
        double n;   cin>>n;
        double ans = pi*(n*n);
        printf("%.10lf",ans);
    }

    return 0;
}
