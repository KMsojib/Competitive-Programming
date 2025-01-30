#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    read(n);
    vector<long long>a(n);
    ///calculate prefix modulus sum
    ll sum=0;
    a[sum]=1;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        sum+=x;
 
        a[(sum%n+n)%n]++;
        ///to avoid negative we simply add +n
    }
 
 
    ll ans=0;
    for(auto it : a){
        ans+=it*(it-1)/2;
        //cout<<it<<" : " <<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
