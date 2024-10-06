#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll x,y,k;   cin>>x>>y>>k;
    x%=y;
    for(int i=0;i<k;i++){
        x++;
        if(x%y==0){
            x/=y;
            if(x%y==0){
                x/=y;
            }
        }
    }
    cout<<x<<endl;

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
    1. increase by 1
    2. chekc if x%y ==0 then x/y if x%y agina then x/y

    x%y ==
    24%5 = 4 k = 4
    4--> 5 5/5 = 1 + 1 = 2,

*/
