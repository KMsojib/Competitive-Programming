#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int k,n;    cin>>k>>n;
    if(k>=10){
        cout<<n<<endl;
    }
    else{
        cout<<n+100*(10-k)<<endl;
    }

    return 0;
}
