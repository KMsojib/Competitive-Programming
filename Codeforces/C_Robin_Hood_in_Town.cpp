#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n <= 2) {
        cout << "-1\n";
        return;
    }
    ll sum = accumulate(a.begin(), a.end(), 0LL);
    sort(a.begin(), a.end());
    ll req = a[n / 2] * 2 * n + 1;
    if (sum >= req) {
        cout << "0\n";
    } else {
        cout << req - sum << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 