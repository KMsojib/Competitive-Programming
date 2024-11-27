#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        map<int,int>mp;
        for(int i=0;i<4;i++){
            int x;  cin>>x;
            mp[x]++;
        }
        int cn =0;
        for(auto[x,y] : mp){
            if(y>=2){
                cn+=y/2;
            }
        }
        cout<<cn<<endl;
    }

    return 0;
}
