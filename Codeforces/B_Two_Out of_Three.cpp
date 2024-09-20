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
    vector<int>b(n,1);
    vector<int>cn(101,0);
    bool twoDone = false,threeDone = false;
    for(int i=0;i<n;i++){
        cn[a[i]]++;
        if(cn[a[i]] == 2){
            if(!twoDone){
                b[i] = 2;
                twoDone = true;
            }
            else if(!threeDone){
                b[i] = 3;
                threeDone = true;
            }
        }
    }
    if(threeDone == false){
        cout<<"-1\n";
        return;
    }
    for(int x : b){
        cout<<x<<" ";
    }
    cout<<endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
