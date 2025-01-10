#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto ch : s){
        mp[ch]++;
    }
    for(auto[x,y] : mp){
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}