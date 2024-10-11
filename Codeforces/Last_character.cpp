#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;   cin>>s;
    char ch = '*';
    int n = s.size()-1;
    int i = n;
    while(i>=0){
        if(s[i]>='a' && s[i]<='z'){
            ch = s[i];
            break;
        }
        i--;
    }
    if(ch!='*'){
        cout<<ch<<endl;
    }
    else{
        cout<<"-1\n";
    }
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
 