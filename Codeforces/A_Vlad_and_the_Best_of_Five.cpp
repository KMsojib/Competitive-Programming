#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        string s;   cin>>s;
        int A=0,B=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                A++;
            }
            else{
                B++;
            }
        }

        if(A>B){
            cout<<"A\n";
        }
        else{
            cout<<"B\n";
        }
    }

    return 0;
}
