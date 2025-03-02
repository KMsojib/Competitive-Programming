#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int> mp;
    for(auto ch : s){
        mp[ch]++;
    }

    int cnt = 0;
    for(auto[x,y] : mp){
        cnt += (y%2);
    }

    cout<<((cnt%2 or !cnt)?"First":"Second")<<endl;
    return 0;
}