#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin>>n;
    int eve = 0, odd = 0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        (a[i] % 2 == 0) ? eve++ : odd++;
    }
    
    if(eve % 2 != odd % 2){
        cout<<"NO"<<endl;
        return;
    }
    else{
        if(eve % 2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(a[i] % 2 != a[j] % 2 && abs(a[i] - a[j]) == 1){
                        cout<<"YES"<<endl;
                        return;
                    }
                }
            }
            cout<<"NO"<<endl;
        }
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
 