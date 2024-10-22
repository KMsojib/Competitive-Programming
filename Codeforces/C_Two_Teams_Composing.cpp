#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
#define clock (clock() * 1000.0 / CLOCKS_PER_SEC)
void solve()
{
    clock;
    ll n;
    cin>>n;
    ll freq[200007]={0};
    ll sameCount = 0, uniquCount = 0;
    for(int i=0;i<n;i++){
        ll x;   cin>>x;
        if(freq[x] == 0){
            freq[x]++;
            uniquCount ++;
            sameCount = max(sameCount,freq[x]);
        }
        else{
            freq[x]++;
            sameCount = max(sameCount,freq[x]);
        }
    }
    if(n == 1){
        cout<<"0\n";
    }
    else{
        if(sameCount == uniquCount - 1){
            cout<<sameCount<<endl;
        }
        else{
            int x = min(sameCount -1, uniquCount);
            int y = min(sameCount,uniquCount-1);
            cout<<max(x,y)<<nline;
        }
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
