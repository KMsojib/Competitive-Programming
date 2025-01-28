#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll maxi = a[n-1] - a[0];
    ll max_count = 0;
    ll l = 0, r = n - 1;
    ll min_count = 0, maxi_count = 0;
    while(l<n){
        if(a[l] == a[0]){
            min_count++;
        }
        if(a[l] == a[n-1]){
            maxi_count++;
        }
        l++;
    }
    if(a[0] == a[n-1]){
        max_count = n*(n-1)/2;
        cout<<maxi<<" "<<max_count;
    }
    else{
        cout<<maxi<<" "<<min_count*maxi_count;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t=1;
    while (t--)
    {
        solve();
    }

    return 0;
}