#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    map<pair<int,int>,int>mp;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        pair<int,int>pp;
        cin>>pp.first>>pp.second;
        mp[pp] ++;
    }

    int cnt = 0;
    for(auto x : mp){
        cnt = max(cnt,x.second);
    }
    cout<<cnt<<endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test_case=1;  //cin>>test_case;
    while(test_case--){
        solve();
    }
    return 0;
}
