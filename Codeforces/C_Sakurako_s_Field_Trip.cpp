#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin>>n;
    vector<int>a(n);    for(int &x : a) cin>>x;

    for(int i=1;i<n/2;i++){
        if(a[i] == a[i-1] || a[n-i] == a[n-i-1]){
            swap(a[i],a[n-i-1]);
        }
    }
    int ans = 0;
    for(int i=1;i<n;i++){
        ans += (a[i] == a[i-1]);
    }

    cout<<ans<<endl;
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int t;  cin>>t; while(t--) solve();
    return 0;
}
 