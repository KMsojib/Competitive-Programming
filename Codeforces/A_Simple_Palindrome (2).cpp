#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;  cin>>n;
    string str = "aeiou";
    vector<int>cnt(5,n/5);
    for(int i=0;i<n%5;i++){
        cnt[i]++;
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<cnt[i];j++){
            cout<<str[i];
        }
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
 