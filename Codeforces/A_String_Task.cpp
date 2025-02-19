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

bool is_vowel(char ch)
{
    if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'y'){
        return true;
    }
    return false;
}

void solve()
{
    string s;
    cin>>s;
    string ans ="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }

    for(int i=0;i<s.size();i++)
    {
        char ch = s[i];
        if(!(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'y'))
		{
			cout<<"."<<s[i];
		}
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