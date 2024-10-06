#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a,b; cin>>a>>b;
    int ans = 0;
    for(int st = 0; st<b.size(); st++){
        int ptr = st;
        for(int i=0;i<a.size();i++){
            if(ptr < b.size() && a[i] == b[ptr]){
                ptr++;
            }
        }
        ///ans = min(ans, (int) a.size() + (int) b.size() - ptr + st);
        ans = max(ans, ptr-st);
    }
    cout<<(int)a.size() + (int)b.size() - ans<<endl;
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
