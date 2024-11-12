#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string r;
    cin >> r;

    int one = count(s.begin(), s.end(), '1');
    int zero = n - one;

    bool ok = true;
    for (int i = 0; i < n - 1; i++){
        if (zero == 0 or one == 0){
            ok = false;
            break;
        }
        else if (r[i] == '1'){
            zero--;
        }
        else{
            one--;
        }
    }
    if (ok){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
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
