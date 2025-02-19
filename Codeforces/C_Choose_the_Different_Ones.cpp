#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    ll n,m,k;   cin>>n>>m>>k;
    set<int>s,st1,st2;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        if(a<=k){
            st1.insert(a);
            s.insert(a);
        }
    }
    for(int j=0;j<m;j++){
        int b; cin>>b;
        if(b<=k){
            st2.insert(b);
            s.insert(b);
        }
    }

    if(s.size() == k && st1.size() >= k/2 && st2.size() >= k/2){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
