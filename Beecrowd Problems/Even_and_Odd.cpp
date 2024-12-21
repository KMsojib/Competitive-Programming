#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>eve,odd;
    int n;  cin>>n;
    while(n--){
        int x;  cin>>x;
        if(x&1){
            odd.push_back(x);
        }
        else{
            eve.push_back(x);
        }
    }
    sort(eve.begin(),eve.end());
    sort(odd.begin(),odd.end(),greater<int>());
    for(auto x : eve){
        cout<<x<<"\n";
    }
    for(auto y : odd){
        cout<<y<<"\n";
    }
}