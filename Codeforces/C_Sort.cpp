#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    ll n,q;
    cin>>n>>q;
    string s,k;
    cin>>s>>k;
    s="0"+s;
    k="0"+k;

    vector<vector<ll>>prefA(n+1,vector<ll>(26,0)),prefB(n+1,vector<ll>(26,0));
    for(int i=1;i<=n;i++){
        prefA[i] = prefA[i-1];
        ll si = s[i] - 'a';
        prefA[i][si]++;
    }
    for(int i=1;i<=n;i++){
        prefB[i] = prefB[i-1];
        ll ki = k[i] - 'a';
        prefB[i][ki]++;
    }

    while(q--){
        int l,r;    cin>>l>>r;
        ll tot = 0;
        for(int i = 0; i < 26; i++){
            ll a = prefA[r][i] - prefA[l-1][i];
            ll b = prefB[r][i] - prefB[l-1][i];
            if(a>=b){
                tot += a-b;
            }
        }
        cout<<tot<<nline;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
