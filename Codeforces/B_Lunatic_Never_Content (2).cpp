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
        vector<int>a(n);
        for(int &x : a){
            cin>>x;
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans = __gcd(ans,abs(a[i]-a[n-i-1]));
        }

        cout<<ans<<"\n";
    }

    return 0;
}
