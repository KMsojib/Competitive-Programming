#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k,x;
    cin>>n>>k>>x;

    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> pref(n,0);
    pref[0] = a[0];
    for(int i=1; i<n; i++){
        pref[i] = pref[i-1] + a[i];
    }
    ll sum = pref[n-1];
    vector<ll>rem(n,0);
    for(int i=0;i<n;i++){
        ll val = pref[n-1] - pref[i];
        
        if(val >= x){
            ll left = i+1, right = n-1, ans = INT_MAX;
            while(left <= right){
                ll mid = (left + right) / 2;
                if(pref[mid] - pref[i] >= x){
                    ans = min(ans, mid-i);
                    right = mid-1;
                }else{
                    left = mid+1;
                }
            }
            if(ans != INT_MAX){
                rem[i] = ans - i;
            }
        }
        else{
            
        }
    }
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
 