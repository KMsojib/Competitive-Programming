#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;  cin>>n;
        ll a[n];
        ll maxi = -1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi = max(maxi,a[i]);
        }

        ll count = 0;
        for(int i=0;i<n;i++){
            if(a[i] == 1){
                count += n;
                continue;
            }
            for(int j=1;j<=n;j++){
                ll value = pow(a[i],j);

                if(value > maxi){
                    break;
                }
                if(value <= a[j-1]){
                    count ++;
                }
            }
        }

        cout<<count<<endl;


    }

    return 0;
}
