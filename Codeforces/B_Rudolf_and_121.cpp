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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        bool f=true;
        for(int i=0;i<n-2;i++){
            if(a[i]<0){
                f=false;
                break;
            }
            a[i+1]-=2*a[i];
            a[i+2]-=a[i];
        }

        if(a[n-2]!=0 || a[n-1]!=0){
            f=false;
        }
        cout<<(f?"YES":"NO")<<"\n";
    }

    return 0;
}
