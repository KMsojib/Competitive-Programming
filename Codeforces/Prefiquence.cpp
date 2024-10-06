#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int i=0,j=0;
        int n,m;    cin>>n>>m;
        string s;   cin>>s;
        string x;   cin>>x;

        int cn=0;
        while(i<n && j<m){
            if(s[i]==x[j]){
                cn++;
                i++,j++;
            }
            else{
                j++;
            }
        }
        cout<<cn<<endl;
    }

    return 0;
}
