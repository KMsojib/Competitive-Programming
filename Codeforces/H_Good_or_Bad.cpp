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
        if(s.find("010")!=string::npos or s.find("101")!=string::npos){
            cout<<"Good\n";
        }
        else{
            cout<<"Bad\n";
        }
        
    }

    return 0;
}
