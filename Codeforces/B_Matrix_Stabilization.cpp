#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;    cin>>n>>m;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            int up = (i > 0) ? a[i-1][j] : 0;
            int dow = (i < n-1) ? a[i+1][j] : 0;
            int left = (j > 0) ? a[i][j-1] : 0;
            int right = (j < m-1) ? a[i][j+1] : 0;

            int maxi = max({up,dow, left,right});

            if(a[i][j] > maxi){
                a[i][j] = maxi;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j] <<" ";
        }
        cout<<endl;
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
 