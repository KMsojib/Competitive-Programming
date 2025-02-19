#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        string n,s; cin>>n>>s;
        int m = max(n.size(),s.size());
        for(int i=0;i<m;i++){
            if(i<n.size()){
                cout<<n[i];
            }
            if(i<s.size()){
                cout<<s[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
