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
        vector<string>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        bool f=false;
        for(int i=0;i<n;i++){
            string s=v[i];
            int cn=count(s.begin(),s.end(),'1');
            if(cn==1){
                f=true;
                break;
            }
        }

        if(f){
            cout<<"TRIANGLE\n";
        }
        else{
            cout<<"SQUARE\n";
        }
        
    }

    return 0;
}
