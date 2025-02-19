/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

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
        vector<ll>a(n);
        ll maxi=-1,mini=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi=max(maxi,a[i]);
            mini=min(mini,a[i]);
        }
        if(n==1){
            cout<<"0\n";
        }
        else{
            cout<<maxi-mini<<"\n";
        }
    }

    return 0;
}
