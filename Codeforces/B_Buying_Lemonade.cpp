#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n,0);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    //a[n] = 0;
    a.push_back(0);
    sort(a.begin(), a.end());
    ll press = 0, crnSum = 0,idx = 1;
    while(crnSum < k){
        ll rm = n - idx + 1;
        ll upadate_val = a[idx] - a[idx-1];
        ll rem_vl = rm*upadate_val;

        if((crnSum + rem_vl) < k){
            crnSum += rem_vl;
            press += rem_vl + 1;
            idx++;
        }
        else{
            press += k - crnSum;
            crnSum = k;
        }
    }
    cout<<press<<nline;
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
