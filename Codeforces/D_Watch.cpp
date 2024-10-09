#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;   cin>>n;
    ll hours = n/3600;
    n%=3600;
    ll mint = n/60;
    n%=60;
    cout<<hours<<":"<<mint<<":"<<n<<endl;


}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1; 
    while(t--){
        solve();
    }
    return 0;
}
 