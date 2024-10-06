#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n;   cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
        int l=0,r=n-1;
        while(l<r){
            if(a[l]-a[r] <= 5){
                ans++;
                l++;
                r--;
            }
            else{
                l++;
                r--;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
