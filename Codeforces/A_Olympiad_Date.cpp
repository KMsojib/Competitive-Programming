#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    string s = "01032025";
    map<int, int> mp, mp1;
    for(char ch : s){
        mp[ch - '0']++;
    }

    int cnt = 0;
    for(auto val : a){
        mp1[val]++;
        cnt++;

        bool ok = true;
        for(auto [x, y] : mp){
            if(mp1[x] < y){
                ok = false;
                break;
            }
        }

        if(ok){
            cout << cnt << endl;
            return;
        }
    }
    cout << 0 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;  cin >> t;
    while(t--){
        solve();
    }
    return 0;
}