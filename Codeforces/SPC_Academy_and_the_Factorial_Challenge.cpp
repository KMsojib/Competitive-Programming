#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<pair<int, int>>prime(ll n){
    vector<pair<int, int>>fact;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            int cnt = 0;
            while(n%i == 0){
                n/=i;
                cnt++;
            }
            fact.push_back({i,cnt});
        }
    }
    if(n > 1){
        fact.push_back({n,1});
    }
    return fact;
}

ll count(ll n, ll p) {
    ll count = 0;
    while (n % p == 0) {
        count++;
        n /= p;
    }
    return count;
}

void solve(){
    ll n;
    cin>>n;
    if(n == 0){
        cout<<"0"<<endl;
        return;
    }
    vector<pair<int, int>> fact = prime(n);
    ll ans = 1, left = 0,right = 1e7;
    while(left <= right){
        ll mid = (left + right) / 2;
        ll cnt = 0;
        bool ok = true;
        for(auto x : fact){
            ll p = x.first;
            ll c = x.second;
            if(count(mid,p) < c){
                ok = false;
                break;
            }
        }
        if(ok){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
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
 