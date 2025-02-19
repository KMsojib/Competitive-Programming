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
        if(n%2==1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i=0;i<(n/2);i++){
                cout<<"BBA";
            }
            cout<<endl;
        }
    }

    return 0;
}
