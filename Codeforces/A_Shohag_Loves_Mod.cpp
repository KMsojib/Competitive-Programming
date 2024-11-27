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
        int i = 1;
        while(n){
            cout<<i<<" ";
            i+=2;
            n--;
        }
        cout<<endl;
    }

    return 0;
}
