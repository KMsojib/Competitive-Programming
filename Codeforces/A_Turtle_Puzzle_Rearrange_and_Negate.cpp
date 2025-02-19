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
        ll sum=0;
        for(int i=0;i<n;i++){
            int x;  cin>>x;
            if(x<0){
                sum+=x*-1;
            }
            else{
                sum+=x;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}
