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
        sort(a.begin(),a.end(),greater<>());
        int sum1 = abs(a[n-1]-a[0])+abs(a[0]-a[n-1]);
        int sum2 = abs(a[n-2]-a[1])+abs(a[1]-a[n-2]);
        cout<<sum1+sum2<<endl;
    }

    return 0;
}
