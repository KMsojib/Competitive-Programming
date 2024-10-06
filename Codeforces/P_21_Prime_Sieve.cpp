#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using lld = long double;
using ull = unsigned long long;

void solve(){
    ll n;   cin>>n;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    ll cn=0;
    for(int i=2;i<=n;i++){
        if(is_prime[i]){
            cn++;
        }
    }
    cout<<cn<<endl;
    for(int i=2;i<=n;i++){
        if(is_prime[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 