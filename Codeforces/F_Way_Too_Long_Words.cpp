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
        if(s.size()<=10){
            cout<<s<<endl;
        }
        else{
            cout<<s[0];
            cout<<s.size()-2;
            cout<<s[s.size()-1];
            cout<<endl;
        }
    }

    return 0;
}
