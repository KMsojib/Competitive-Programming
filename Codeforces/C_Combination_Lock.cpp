#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;

    if (n == 1){
        cout << 1 << endl;
        return;
    }
    if (n % 2 == 0){
        cout << -1 << endl;
        return;
    }

    vector<int> a;
    for(int i=1;i<=n;i+=2){
       a.push_back(i);
    }
    for(int i=2;i<=n;i+=2){
        a.push_back(i);
    }

    for (auto val : a){
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
