#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int f(int N)
{
    if (N <= 1)
       {
        return N;
       }
       
    return f(N-1) + f(N-2);
}
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n;  cin>>n;
        cout<<f(n)<<endl;
    }

    return 0;
}
