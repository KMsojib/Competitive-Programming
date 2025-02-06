#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> vp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vp[i].first >> vp[i].second;
    }

    auto comp = [](pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.first < b.first;
    };
    sort(vp.begin(), vp.end(), comp);

    ll ans = 0, crn = 0;
    ll l = 0, r = 0;
    while(r<n){
        if(vp[r].first - vp[l].first < k){
            crn += vp[r].second;
            r++;
        }
        else{
            crn -= vp[l].second;
            l++;
        }
        ans = max(ans, crn);
    }
    cout<<ans<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case = 1;
    while (test_case--)
    {
        solve();
    }

    return 0;
}