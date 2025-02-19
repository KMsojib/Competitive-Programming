#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using lld = long double;
using ull = unsigned long long;

const lld pi= 3.141592653589793238;
const ll INF= LONG_LONG_MAX;
const ll mod=1000000007;

typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<pll> vpll;
typedef vector<string> vs;

void solve(){
    ll n;  cin>>n;
    vll a(n),b(n+1);

    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n+1;i++)  cin>>b[i];
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans += abs(a[i]-b[i]);
    }

    ll last_val = b[n],update_last = 1e9;
    for(int i=0;i<n;i++){
        update_last = min(update_last,min(abs(last_val-b[i]),abs(last_val - a[i])));
        if(last_val >= min(a[i],b[i]) && last_val <= max(a[i],b[i])){
            update_last = 0;
        }
    }

    ans += update_last+1;
    cout<<ans<<endl;
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
 