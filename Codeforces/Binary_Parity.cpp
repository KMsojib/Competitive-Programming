#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        int count = __builtin_popcount(n);
        if(count%2==0){
            cout<<"EVEN\n";
        }
        else{
            cout<<"ODD\n";
        }
    }

    return 0;
}
