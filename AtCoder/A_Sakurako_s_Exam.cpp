#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int a, b;
    cin >> a >> b;
    bool ok = true;
    if (a % 2){
        ok = false;
    }
    else{
        if (b % 2==0){
            ok = true;
        }
        else{
            if (a == 0){
                ok = false;
            }
            else{
                ok = true;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
