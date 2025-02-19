#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve(){
    char ch;    cin>>ch;
    string s;   cin>>s;
    int n = s.size();
    string all = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    if(ch == 'R'){
        for(int i=0;i<n;i++){
            size_t found = all.find(s[i]);
            if (found != string::npos){
                cout<<all[found-1];
            }
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            size_t found = all.find(s[i]);
            if(found != string :: npos){
                cout<<all[found+1];
            }
        }
       cout<<endl;
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
 