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
    int ans = 0, cn = 0;
    int ans1 = 0, cn1 = 0;
    for(int i=0;i<n;i+=2){
        ans = max(ans,a[i]);
        cn++;
    }
    for(int i=1;i<n;i+=2){
        ans1 = max(ans1,a[i]);
        cn1++;
    }
    ans1+=cn1;
    ans+=cn;
    cout<<max(ans1,ans)<<endl;
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
