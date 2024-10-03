#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;   cin>>n;
    ll total_sum = n*(n+1) / 2;
    if(total_sum%2 == 0){
        cout<<"YES\n";
        map<ll,bool>mp;
        vector<int>ans;
        ll making_sum = total_sum / 2;
        int l = n;
        while(making_sum > 0){
            if(l>making_sum){
                l--;
            }
            else if(l == making_sum){
                ans.push_back(l);
                mp[l] = true;
                break;
            }
            else{
                ans.push_back(l);
                mp[l] = true;
                making_sum -= l;
                l--;

            }
        }
        cout<<ans.size()<<endl;
        for(auto x : ans)   cout<<x<<" ";
        cout<<endl;
        int r = 1;
        vector<int>ans2;
        while(r<=n){
            if(mp[r] == false){
                ans2.push_back(r);
            }
            r++;
        }
        cout<<ans2.size()<<endl;
        for(auto it : ans2) cout<<it<<" ";
        cout<<endl;
    }
    else{
        cout<<"NO\n";
    }
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
 