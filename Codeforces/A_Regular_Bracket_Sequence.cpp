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
        if(s[0]==')' || s[s.size()-1]=='('){
            cout<<"NO\n";
        }
        else if(count(s.begin(),s.end(),'?')%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
/*
    good seq: ()
    open=( close =)
    if case for open close
    else if case for ? even or not
    else case for not satisfy thses case:
    (??)?

*/