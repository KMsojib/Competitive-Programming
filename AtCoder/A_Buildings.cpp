#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n);
        int maxi = -1;
        int idx = -1;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        maxi = a[0];
        for(int i=1;i<n;i++){
            if(a[i]>maxi){
                maxi = a[i];
                idx = i+1;
                break;
            }
        }
        cout<<idx<<endl;
    }

    return 0;
}
