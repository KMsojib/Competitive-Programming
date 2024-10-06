#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n;  cin>>n;
        for(int i=0;i<n;){
            cout<<(char)(i++%4+97);
        }
        cout<<endl;
    }

    return 0;
}

