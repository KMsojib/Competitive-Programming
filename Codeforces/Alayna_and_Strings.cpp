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
        int cap=0,sml=0;
        for(auto ch : s){
            if(ch>='a' && ch<='z'){
                sml ++;
            }
            if(ch>='A' && ch<='Z'){
                cap++;
            }
        }
        cout<<cap<<" "<<sml<<endl;
    }

    return 0;
}
