#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES printf("YES\n")
#define NO printf("NO\n")
#define nl "\n"
#define mod 1000000007
#define in_range(a,b)    for(int i=a;i<b;i++)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
void solve()
{
    string s;
    cin>>s;
    stack< char > st;
    for(int i=0;i<s.size();i++)
    {
        st.push(s[i]);
    }

    string temp = "hello";
    int cn=0,i=temp.size()-1;
    while(!st.empty())
    {
        if(temp[i] == st.top())
        {
            cn++;
            i--;
            st.pop();
        }
        else
        {
            st.pop();
        }
    }
    if(cn == temp.size())
    {
        YES;
    }
    else
    {
        NO;
    }
    

}

int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}