
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n+1,0),pos(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pos[a[i]]=i;
        }
        ll cn=0;
        for(int i=2;i<=n;i++){
            if(pos[i-1]>pos[i]){
                cn++;
            }
        }
        cout<<cn<<endl;
    }
    
    return 0;
}
