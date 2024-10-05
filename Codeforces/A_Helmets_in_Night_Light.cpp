#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,k; cin>>n>>k;
    vector<pair<ll,int>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].second;
    }
    for(int i=0;i<n;i++){
        cin>>a[i].first;
    }

    sort(a.begin(),a.end());
    ll sharePeople = 1; // already share one people
    ll shareCost = k; // max cost
    for(auto [x,y] : a){
        if(x>k){
            break;
        }
        shareCost += x*min(n-sharePeople,1ll*y);
        sharePeople += min(n-sharePeople,1ll*y);
    }
    shareCost += k * (n-sharePeople); // chef share remaining people
    cout<<shareCost<<endl;
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
 