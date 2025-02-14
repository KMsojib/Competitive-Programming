#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin>>n;

    priority_queue<ll,vector<ll>,greater<ll>>pq;
    ll sum = 0;
    
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        
        sum += x;
        pq.push(x);
        while(sum < 0){
            sum -= pq.top();
            pq.pop();
        }
    }
    cout<<(int)pq.size()<<endl;
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
