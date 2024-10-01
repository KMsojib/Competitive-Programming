#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void Solve(){
    string s,t;
    cin>>s>>t;
    vector<int> cnt(26,0);
    for(auto i:t)cnt[i-'A']++;
    string temp="";
    for(int i=s.size()-1;i>=0;i--){
        if(cnt[s[i]-'A']>0){
            temp+=s[i];
            cnt[s[i]-'A']--;
        }
    }
    reverse(temp.begin(),temp.end());
    if(temp == t){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}


int32_t main(){
    int T=1;
    cin>>T;
    while(T--){
        Solve();
    }
    return 0;
}

