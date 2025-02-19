
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;  cin>>n;
        vector<int>a(2*n+1,-1);
        for(int i=1;i<=n;++i){
            int x;  cin>>x;
            a[x]=i;
        }

        int cn=0;
        for(int sum=3;sum<2*n; sum++){
            for(int i=1;i*i<=sum;++i){
                if( sum%i==0 && i*i!=sum && a[i]!=-1 && a[sum/i]!=-1 && a[i]+a[sum/i]==sum ){
                    cn++;
                }
            }
        }
        cout<<cn<<endl;
    }

    return 0;
}

