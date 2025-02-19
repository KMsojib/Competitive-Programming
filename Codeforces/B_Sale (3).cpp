#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n,m;  cin>>n>>m;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans = 0;
        for(int i=0;i<m;i++){
            if(a[i]>0){
                break;
            }
            ans+=abs(a[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}
