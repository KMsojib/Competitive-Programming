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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int ans = INT_MAX;
        for(int i=0;i<n-1;i++){
            ans = min(ans,max(a[i],a[i+1]));
        }
        ans--;
        cout<<ans<<endl;
    }

    return 0;
}
