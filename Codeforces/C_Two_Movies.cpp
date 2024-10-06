#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 20;
int n,a[N],b[N];
void solve(){
    cin>>n;
    for(int i=0; i<n; i++)  cin>>a[i];
    for(int j=0; j<n; j++)  cin>>b[j];

    int v1 = 0, v2 = 0, sp = 0, sm = 0;
    for(int i=0; i<n; i++){
        if(a[i] > b[i]) v1 += a[i];
        else if(a[i] < b[i])    v2 += b[i];
        else if(a[i] == 1) sp ++;
        else if(a[i] == -1) sm ++;
    }

    while(sp--){
        (v1 < v2) ? v1++ : v2++;
    }

    while(sm --){
        (v1 > v2) ? v1-- : v2--;
    }
    cout<<min(v1,v2)<<endl;
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
 