#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,q;
    cin>>n>>q;
    long long a[n+1], pref[n];
    long long sum = 0;
    for(int i=1;i<=n;i++){
        long long x;
        cin>>x;
        sum += x;
        pref[i] = sum;
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        if(l == 1){
            cout<<pref[r]<<endl;
        }
        else{
            cout<<pref[r] - pref[l-1]<<endl;
        }
    }
    return 0;
}