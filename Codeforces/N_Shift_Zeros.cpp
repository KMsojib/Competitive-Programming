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
        vector<int>ans;
        int cn=0;
        for(int i=0;i<n;i++){
            int x;  cin>>x;
            if(x==0){
                cn++;
            }
            else{
                ans.push_back(x);
            }
        }
        for(int i=0;i<n-cn;i++){
            cout<<ans[i]<<" ";
        }
        for(int i=0;i<cn;i++){
            cout<<"0 ";
        }
        cout<<endl;
    }

    return 0;
}
