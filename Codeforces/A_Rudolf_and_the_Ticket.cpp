#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n,m,k;   cin>>n>>m>>k;
        vector<int>a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<m;j++){
            cin>>b[j];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int cn=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]+b[j] <=k){
                    cn++;
                }
            }
        }

        cout<<cn<<endl;
    }

    return 0;
}
