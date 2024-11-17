#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        string s;   cin>>s;
        int one = 0, two = 0, three = 0;
        for(auto x : s){
            if(x == '1') one ++;
            if(x == '2') two ++;
            if(x == '3') three ++;
        }
        if(one == 1 && two == 2 && three == 3){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}
