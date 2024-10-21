#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
bool desen(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i] = make_pair(x, y);
    }
    sort(a.begin(),a.end(),desen);
    bool ok = false;
    for(auto x : a){
        if(x.second > x.first){
            ok = true;
            break;
        }
    }
    cout<<(ok ? "Happy Alex" : "Poor Alex")<<nline;
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
