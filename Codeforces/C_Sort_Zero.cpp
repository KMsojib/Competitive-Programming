#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;  cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(is_sorted(a.begin(),a.end())){
        cout<<"0\n";
        return;
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(a[i]) == mp.end()){
            mp[a[i]] = i;
        }
    }

    int idx = -1;
    for(int i=n-1;i>=1;i--){
        if(a[i]<a[i-1]){
            idx = i-1;
            break;
        }
    }

    set<int>save;
    int ans = mp.size();
    for(int i=n-1;i>=idx+1;i--){
        if(mp[a[i]] <= idx){
            break;
        }
        save.insert(a[i]);
    }

    cout<<ans-save.size()<<endl;
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
 