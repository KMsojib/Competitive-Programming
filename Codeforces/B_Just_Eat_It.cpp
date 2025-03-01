#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if (sum <= 0){
            cout << "NO\n";
            return;
        }
    }

    sum = 0;
    for (int i = n - 1; i >= 0; i--){
        sum += a[i];
        if (sum <= 0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
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
