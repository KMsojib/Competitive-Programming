#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;  cin>>n;
    map<int,int>mp;
    for(int i = 0; i<n;i++){
        int x;  cin>>x;
        mp[x]++;
    }

    int num_of_tower = mp.size();
    int max_tower_size = 0;
    for(auto[x,y] : mp){
        max_tower_size = max(max_tower_size,y);
    }

    cout<<max_tower_size<<" "<<num_of_tower<<endl;
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
 