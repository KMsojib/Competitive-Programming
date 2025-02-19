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
        string sub = "hello";
        int i=0,j=0;
        bool f = false;
        while(true){
            if(s[j]==sub[i]){
                i++,j++;
            }
            else{
                j++;
            }
            if(j<s.size() && i+1>sub.size()){
                f=true;
                break;
            }
            if(j+1>s.size() && i<sub.size()){
                f=false;
                break;
            }
            
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
