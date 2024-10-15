#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    string s, r;
    cin >> s >> r;

    int n = (int)s.size(), m = (int)r.size();
    int cn = 0;

    int len = min(n, m), ans = 0;
    for (int i = 0; i < len; i++){
        if (s[i] == r[i]){
            cn++;
        }
        else{
            break;
        }
    }
    ans = cn + (n - cn) + (m - cn);
    if (cn == 0){
        cout << ans << endl;
    }
    else{
        ans++;
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t = 1;cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
