#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(auto &it : a)
        cin>>it;
    for(auto &it : b)
        cin>>it;
    
    int cnt = 0;
    int maxi = 0, mini = INT_MAX;
    for(int i=0; i<n; i++){
        cnt += (a[i] < b[i]);
    }

    if(cnt == 0){
        cout<<"YES"<<endl;
    }
    else if(cnt >= 2){
        cout<<"NO"<<endl;
    }
    else{
        for(int i = 0; i<n; i++){
            if(a[i] < b[i]){
                maxi = b[i] - a[i];
            }
            else{
                mini = min(mini, a[i] - b[i]);
            }
        }

        if(maxi <= mini){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}