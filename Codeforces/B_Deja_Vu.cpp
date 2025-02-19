#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        long long n,q;  cin>>n>>q;
        vector<ll>a(n),x;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<q;j++){
                int y;  cin>>y;
                if(x.empty() || x.back()>y){
                    x.push_back(y);
                }
        }
        for(int i=0;i<n;i++){
            for(auto it : x){
                if(a[i]%(1<<it)==0){
                    a[i] += (1<<it)>>1;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
