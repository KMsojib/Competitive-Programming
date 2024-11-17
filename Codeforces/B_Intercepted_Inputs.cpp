#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool find(int x,int n,vector<int>a){
    int left = 0, right = n;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(a[mid] == x){
            return true;
        }
        else if(a[mid]>x){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return false;
}

void solve(){
    ll n;   cin>>n;
    vector<int>a(n);
    vector<pair<int,int>>div;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    n-=2;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            div.push_back({i,n/i});
            if(i!=n/i){
                div.push_back({n/i,i});
            }
        }
    }
    n+=2;
    for(auto it : div){
        if(find(it.first,n,a)&& find(it.second,n,a)){
            cout<<it.first<<" "<<it.second<<endl;
            return;
        }
    }
    cout<<1<<" "<<1<<endl;
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
 