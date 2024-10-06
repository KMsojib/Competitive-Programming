#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        string s;   cin>>s;
        long long ans=0,cn=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                cn++;
            }
            else if(cn!=0){
                ans+=(cn+1);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
