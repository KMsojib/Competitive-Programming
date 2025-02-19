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
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll pref_sum = 0, pref_max = 0, cn =0;
        for(int i=0;i<n;i++){
            pref_sum += a[i];
            pref_max = max(pref_max,a[i]);

            if(pref_sum - pref_max == pref_max){
                cn++;
            }
        }
        cout<<cn<<endl;
    }

    return 0;
}
