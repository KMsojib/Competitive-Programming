#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--){
        int x,y;    cin>>x>>y;

        int ans = y/2;
        y%=2;
        x = x-ans*7;
        if(x<0){
            x=0;
        }
        if(y)
        {
            ans++;
            x = x-11;
            if(x<0){
                x=0;
            }
        }
        if(x){
            ans += x/15;
            if(x%15){
                ans++;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}

/*  x  y
    7  2 --> 1
    11 1 --> 1
    15 0 --> 1
    

*/