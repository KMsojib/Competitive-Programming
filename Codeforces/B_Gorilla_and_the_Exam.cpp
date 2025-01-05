#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<ll, ll> mp;
    stack<ll> st;
    for (int i = 0; i < n; i++){
        mp[a[i]]++;
    }
    vector<ll> cnt;
    for (auto [x, y] : mp){
        cnt.push_back(y);
    }

    sort(cnt.begin(), cnt.end(), greater<ll>());
    for (int i = 0; i < cnt.size(); i++){
        st.push(cnt[i]);
    }
    while (st.size() > 0 && st.top() <= k){
        k -= st.top();
        st.pop();
    }
    if (st.size() > 0){
        cout << st.size() << endl;
    }
    else{
        cout << 1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
