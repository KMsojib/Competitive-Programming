#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;  cin>>n;
    char arr[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    vector<int>vp;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == '#'){
                vp.push_back(j+1);
            }
        }
    }
    reverse(vp.begin(),vp.end());
    for(auto x : vp){
        cout<<x<<" ";
    }
    cout<<endl;
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
 