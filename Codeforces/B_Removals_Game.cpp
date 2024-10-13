#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    int t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        vector<int>a(n),b(n);

        for(auto &x : a)    cin>>x;
        for(auto &y : b)    cin>>y;

        if(a == b){
            cout<<"Bob\n";
            continue;
        }
        reverse(b.begin(),b.end());
        if(a == b){
            cout<<"Bob\n";
            continue;
        }
       
        cout<<"Alice\n";
    }
    return 0;
}