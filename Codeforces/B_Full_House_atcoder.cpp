#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  cin>>t;
    while(t--){
        map<int,int>mp;
        for(int i=0;i<5;i++){
            int x;  cin>>x;
            mp[x]++;
        }

        bool f = true;
        for(auto it : mp){
            if(it.second == 1){
                f=false;
                break;
            }
        }

        if(f){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }

    return 0;
}
