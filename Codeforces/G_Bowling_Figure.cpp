#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    string s;
    cin>>s;
    int w=0,r=0,o=s.size();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W')
        {
            w++;
        }
        else
        {
            r+=s[i]-'0';
        }

    }
    if(o/6>1)
    {
        cout<<o/6<<"."<<o%6<<" Overs ";
    }
    else
    {
        cout<<"0."<<o<<" Over ";
    }

    if(r>1)
    {
        cout<<r<<" Runs ";
    }
    else
    {
        cout<<r<<" Run ";
    }

    if(w>0)
    {
        cout<<w<<" Wickets.";
    }
    else
    {
        cout<<w<<" Wicket.";
    }
    cout<<'\n';

}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
