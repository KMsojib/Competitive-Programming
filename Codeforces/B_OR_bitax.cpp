#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    for(int i=0;i<t;i++){
        int n;  cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans = 0;
        for(auto x : a){
            ans |= x;
        }
        cout<<ans<<endl;
    }
}