#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    std::vector<int>a(n);

    for(auto &it : a){
        cin>>it;
    }

    set<ll>st;
    ll left = 0;
    for(int i=0; i<n; i++){
        left += a[i];
        st.insert(left);
    }

    ll ans = 0;
    ll right = 0;
    for(int i=n-1;i>=0;i--){
        st.erase(left);
        left -= a[i];
        right += a[i];

        if(st.find(right) != st.end()){
            ans = max(ans, right);
        }
    }
    cout<<ans<<endl;

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
