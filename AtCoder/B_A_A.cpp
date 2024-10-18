#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n;   cin>>n;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i == i){
                    //div.push_back(i);
                    ll temp = pow(i,i);
                    if(temp == n){
                        cout<<i<<"\n";
                        return 0;
                    }
                }
                else{
                    //div.push_back(i);
                    //div.push_back(n/i);
                    if(pow(n/i, n/i) == n){
                        cout<<n/i<<"\n";
                        return 0;
                    }
                }
            }
        }
        
        cout<<-1<<"\n";
    }

    return 0;
}
