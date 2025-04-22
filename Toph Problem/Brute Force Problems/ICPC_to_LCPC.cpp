#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n>1582){
            if((n%4==0 && n%100!=0) || (n%400 ==0)){
                cout<<"I can participate in LCPC\n";
            }
            else{
                cout<<"I have to travel back to the past\n";
            }
        }
        else{
            if(n%4==0){
                cout<<"I can participate in LCPC\n";
            }
            else{
                cout<<"I have to travel back to the past\n";
            }
        }
    }

    return 0;
}
