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
        map<string,int>mp;
        for(int i=0;i<n;i++){
            int x,y;
            string s;
            cin>>x;
            if(x==1){
                cin>>s>>y;
                mp[s]+=y;
            }
            else if(x==2){
                cin>>s;
                mp[s]=0;
            }
            else{
                cin>>s;
                cout<<mp[s]<<"\n";
            }

        }
    }

    return 0;
}
