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
        n--;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll res = 1e8;
        cout<<res<<" ";
        for(int i=0;i<n;i++){
            res += a[i];
            cout<<res<<" ";
        }
        cout<<endl;
    }

    return 0;
}