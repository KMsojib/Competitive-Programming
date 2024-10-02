#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin>>n;
    int sum = 0, last = 9;
    vector<int>ans;
    while(sum<n && last>0){
        ans.push_back(min(n-sum,last));
        sum+=last;
        last--;
    }

    if(sum<n){
        cout<<"-1\n";
    }
    else{
        reverse(ans.begin(),ans.end());
        for(auto x : ans){
            cout<<x;
        }
        cout<<endl;
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
 