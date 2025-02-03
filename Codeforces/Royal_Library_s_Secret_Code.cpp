#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    bool ok = true;
    for (int i = 1; i < k; i++)
    {
        ok = next_permutation(s.begin(), s.end());
        if (!ok)
        {
            ok = false;
            break;
        }
    }

    if(!ok){
        cout<<"-1"<<endl;
    }
    else{
        cout<<s<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
