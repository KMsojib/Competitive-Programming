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
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        cout<<(2*sum) - (a[0]+a[1])<<endl;
    }

    return 0;
}
