#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char buf[200043];
void solve(){
    string s;   cin>>s;
    int ans = INT_MAX;
    int n = s.size();

    vector<pair<char,int>>vp;

    for(auto x : s){
        if(vp.empty() || vp.back().first != x){
            vp.push_back({x,1});
        }
        else{
            vp.back().second ++;
        }
    }

    int m = vp.size();
    for(int i=1;i<m-1;i++){
        if(vp[i-1].first != vp[i+1].first){
            ans = min(ans,vp[i].second + 2); 
            // (i-1) and (i+1) are two char thats why + 2
        }
    }
    if(ans>n)   ans = 0;
    cout<<ans<<endl;
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

/*
12222133333332

x : vp.back.first <<  : vp.back.scond count 
1 1 1
x : vp.back.first <<  : vp.back.scond count 
2 2 1
vp.back first  :  count 
2 2
vp.back first  :  count 
2 3
vp.back first  :  count 
2 4
x : vp.back.first <<  : vp.back.scond count 
1 1 1
x : vp.back.first <<  : vp.back.scond count 
3 3 1
vp.back first  :  count 
3 2
vp.back first  :  count 
3 3
vp.back first  :  count 
3 4
vp.back first  :  count 
3 5
vp.back first  :  count 
3 6
vp.back first  :  count 
3 7
x : vp.back.first <<  : vp.back.scond count 
2 2 1
3



*/