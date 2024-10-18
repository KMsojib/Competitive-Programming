#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    vector<ll>x;
    while(true){
        ll n;   cin>>n;
        if(n==0){
            x.push_back(n);
            break;
        }
        else{
            x.push_back(n);
        }
    }
    for(int i=x.size()-1;i>=0;i--){
        cout<<x[i]<<"\n";
    }
    cout<<"\n";
    

    return 0;
}
