#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int n;
    cin>>n;
    if(360%(180-n) == 0){
        cout<<"YES"<<nline;
    }
    else{
        cout<<"NO"<<nline;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
