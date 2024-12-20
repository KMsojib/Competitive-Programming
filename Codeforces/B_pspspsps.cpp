#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(n + 2, n + 1), b(n + 1, 0);
    vector<int> ans(n);
    for (int i = 1; i <= n; i++){
        if (s[i - 1] == 's'){
            b[i] = i;
        }
        else{
            b[i] = b[i - 1];
        }
    }
    for (int i = n; i >= 1; i--){
        if (s[i - 1] == 'p'){
            a[i] = i;
        }
        else{
            a[i] = a[i + 1];
        }
    }
    for (int i = 1; i <= n; i++){
        int x = n + 1;
        int y = n + 1;
        if (a[i] <= n){
            x = a[i];
        }
        if (b[i] >= 1){
            y = n - b[i] + 1;
        }
        if (x != n + 1 && y != n + 1){
            ans[i - 1] = min(x, y);
        }
        else if (x != n + 1){
            ans[i - 1] = x;
        }
        else if (y != n + 1){
            ans[i - 1] = y;
        }
        else{
            ans[i - 1] = n;
        }
    }
    sort(ans.begin(), ans.end());
    bool ok = true;
    for (int i = 1; i <= n; i++){
        if (ans[i - 1] < i){
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
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
