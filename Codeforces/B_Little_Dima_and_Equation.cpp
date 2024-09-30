#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll S(ll x){
    if(x<0) return -1;
    ll s = 0;
    while (x){
        s+=x%10;
        x/=10;
    }
    return s;
}

ll poww(ll a, ll b){
    ll res = 1;
    for(int i=1;i<=b;i++){
        res*=a;
    }
    return res;
}
void solve(){
    int a,b,c;  cin>>a>>b>>c;
    vector<ll>ans;
    int cn = 0;
    for(int s=1;s<=81;s++){
        ll x = b*poww(s,a) + c;
        if (S(x) == s && x < 1000000000){
            ans.push_back(x);
            cn++;
        }
    }
    cout<<cn<<endl;
    for(auto x : ans){
        cout<<x<<" ";
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
 