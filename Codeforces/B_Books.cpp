#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n,k;    cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int cn=0;
        for(int i=0;i<n;i++){
            if(a[i]<=k){
                cn++;
                k-=a[i];
            }
        }
        printf("%d\n",cn);
    }

    return 0;
}
