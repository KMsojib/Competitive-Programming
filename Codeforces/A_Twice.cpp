#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        vector<int>a(n);
        map<int,int>mp;
        int cn =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }

        for(auto [x,y] : mp){
            if(y>=2){
                cn+=(y/2);
            }
        }
        cout<<cn<<endl;
    }

    return 0;
}
