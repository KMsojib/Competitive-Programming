#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,k,f[150001],x,i=1,p=0,j=0;
    for(cin>>n>>k;  i<=n;  cin >> x,p+=x,f[i++]=p);
    for(i=1;i<=n-k;i++)
        if(f[i+k]-f[i]<f[j+k]-f[j])j=i;
    cout << j+1;

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
