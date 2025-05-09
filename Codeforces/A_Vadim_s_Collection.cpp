#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin >> s;
    map<char, int> mp;

    for (auto x : s){
        mp[x]++;
    }

    string ans = "";
    for (int i = 0; i < 10; i++){
        int digit = 9 - i;
        bool ok = false;
        for (int i = digit; i <= 9; i++){
            if (mp[i + '0'] > 0){
                mp[i + '0']--;
                ans += (i + '0');
                ok = true;
                break;
            }
        }
        if (!ok){
            continue;
        }
    }
    cout << ans << endl;
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
