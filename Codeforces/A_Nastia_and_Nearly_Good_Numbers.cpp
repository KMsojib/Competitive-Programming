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
        int x,y;
        cin>>x>>y;
        if(y==1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            cout<<x<<" "<<x*(long long)y<<" "<<x*(long long)(y+1)<<endl;
        }
        
    }

    return 0;
}