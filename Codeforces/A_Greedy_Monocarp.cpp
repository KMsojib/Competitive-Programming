#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    bool ok = false;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        sort(a.begin(),a.end(),greater<int>());
        int tot = 0;
        for(int i=0;i<n;i++){
            if(tot+a[i]>k){
                cout<<k-tot<<endl;
                return;
            }
            tot += a[i];
        }
        cout<<k-tot<<endl;
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
 