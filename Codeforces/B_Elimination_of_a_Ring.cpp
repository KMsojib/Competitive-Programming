#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;   cin>>n;
    set<int>st;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        st.insert(a[i]);
    }

    if(st.size()<=2){
        cout<<n/2+1<<endl;
    }
    else{
        cout<<n<<endl;
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
 