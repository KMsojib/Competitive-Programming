#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){

    auto LCM = [](string s,int g) -> string{
        string res = "";
        while(g--){
            res += s;
        }
        return res;
    };

    int n;  cin>>n;
    while(n--){
        string s;   cin>>s;
        string t;   cin>>t;

        int n = s.length();
        int m = t.length();

        int g = __gcd(n,m);
        if(LCM(s,m/g) == LCM(t,n/g)){
            cout<<LCM(s,m/g)<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 