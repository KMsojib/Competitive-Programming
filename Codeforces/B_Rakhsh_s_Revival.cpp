#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,k;  cin>>n>>m>>k;
        string s;   cin>>s;
        int op = 0, idx = 0,cn = 0;
        while(idx<n){
            if(s[idx] == '1'){
                cn = 0;
                idx++;
            }
            else{
                cn++;
                if(cn == m){
                    op++;
                    cn=0;
                    idx+=k;
                }
                else{
                    idx++;
                }
            }
            
        }
        cout<<op<<endl;
    }
    return 0;
}
