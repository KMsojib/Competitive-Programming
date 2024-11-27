#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n,k;    cin>>n>>k;
        string s;   cin>>s;
        int cn = 0,tot = 0;
        for(int i=0;i<n;i++){
            if(s[i] == 'O'){
                tot++;
            }
            else{
                tot = 0;
            }
            if(tot == k){
                cn++;
                tot = 0;
            }
        }
        cout<<cn<<endl;
    }

    return 0;
}
