#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int count(int n, int p) {
    int count = 0;
    while (n % p == 0) {
        count++;
        n /= p;
    }
    return count;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll cn1 = 0, cn2 = 0;
    for(int i=0;i<n;i++){
        cn1 += count(a[i],2);
        cn2 += count(a[i],5);
    }
    cout<<min(cn1,cn2)<<endl;

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
 