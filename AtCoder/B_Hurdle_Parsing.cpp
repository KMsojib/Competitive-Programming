#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        string s;   cin>>s;
        vector<int>ans;
        int cn = 0;
        for(int i=0;i<(int)s.size();i++){
            if(s[i] == '|' && i>0){
                ans.push_back(cn);
                cn = 0;
            }
            else{
                if(s[i]!='|'){
                    cn++;
                }
            }
        }
        for(auto x : ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}
