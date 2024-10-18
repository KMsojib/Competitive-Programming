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
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans = 0;
        int i=0,j=n-1;
        while(i<j){
            ans += (a[j]-a[i]);
            i++;
            j--;
        }
        if(n%2==1){
            ans += a[j];
        }
        cout<<ans<<endl;
    }

    return 0;
}
