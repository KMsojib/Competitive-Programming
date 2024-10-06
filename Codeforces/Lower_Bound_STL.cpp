#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n;   cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int q;  cin>>q;
        for(int i=0;i<q;i++){
            int x;  cin>>x;
            auto it = lower_bound(a.begin(),a.end(),x);
            if(*it == x){
                int pos = it - a.begin();
                cout<<"Yes "<<pos+1<<endl;
            }
            else{
                int pos = it - a.begin();
                cout<<"No "<<pos+1<<endl;
            }

        }
    }

    return 0;
}
