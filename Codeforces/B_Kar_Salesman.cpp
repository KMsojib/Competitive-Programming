#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    ll sum = 0, maxi = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        maxi = max(maxi, a[i]);
    }

    cout << max(maxi, (sum + k - 1) / k) << endl;
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
 