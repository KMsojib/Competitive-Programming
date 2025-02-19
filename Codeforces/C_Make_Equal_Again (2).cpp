#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll left=1,right=1;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                break;
            }
            left++;
        }

        for(int i=n-2;i>=0;i--){
            if(a[i]!=a[i+1]){
                break;
            }
            right++;
        }

        ll sum=0;
        if(a[0]==a[n-1]){
            sum=min(n,left+right);
        }
        else{
            sum=max(left,right);
        }
        cout<<(n-sum)<<"\n";

    }

    return 0;
}
