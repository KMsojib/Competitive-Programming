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
        int n,k;     cin>>n>>k;
        // if((k<n)||(!n&1)&&(k&1)){
        //     cout<<"No\n";
        // }
        if((n%2==0) && (k%2==1) || (k<n)){
            cout<<"No\n";
        }
        else if(n&1){
            cout<<"Yes\n";
            for(int i=1;i<n;i++){
                cout<<"1 ";
            }
            cout<<(k-n+1)<<"\n";
        }
        else{
            cout<<"Yes\n";
            for(int i=2;i<n;i++){
                cout<<"1 ";
            }
            cout<<(k-n+2)/2<<" "<<(k-n+2)/2<<"\n";
        }
    }
    return 0;
}
