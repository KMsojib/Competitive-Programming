#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        int sum = a[0]+a[1]+a[2];

        if(sum%2){
            cout<<"-1\n";
        }
        else{
            cout<<min(a[0]+a[1],sum/2)<<endl;
        }
    }

    return 0;
}
