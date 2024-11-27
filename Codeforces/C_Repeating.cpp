#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n;  
        cin>>n;
        vector<int>a(n),b(n,-1);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            if(mp[a[i]]){
                b[i] = mp[a[i]];
                mp[a[i]] = i+1;
            }
            else{
                mp[a[i]] = i+1;
            }
        }
        for(auto x : b){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}
