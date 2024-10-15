#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int a,b,c;  cin>>a>>b>>c;
    cout<<min({a,b,c}) <<" "<<max({a,b,c})<<nline;
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
