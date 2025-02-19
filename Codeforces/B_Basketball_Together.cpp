
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
        int n,d;  cin>>n>>d;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll crn=n,ans=0;
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        for(int i=0;i<n;i++){
            ll x=((d)/a[i])+1;
            crn-=x;
            if(crn>=0){
                ans++;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
    return 0;
}
