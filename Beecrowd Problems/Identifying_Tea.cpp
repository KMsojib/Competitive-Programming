#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int type;   cin>>type;
        map<int,int>mp;
        for(int i=0;i<5;i++){
            int x;  cin>>x;
            mp[x]++;
        }
        cout<<mp[type]<<endl;
    }

    return 0;
}
