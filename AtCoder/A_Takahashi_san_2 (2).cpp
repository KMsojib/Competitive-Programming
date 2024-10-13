#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    string s;   cin>>s;
    int n = s.size() - 1;
    if(s[n] == 'n' && s[n-1] == 'a' && s[n-2] == 's')
    {
        cout<<"Yes"<<nline;
    }
    else
    {
        cout<<"No"<<nline;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1; //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
