#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &it : a){
        cin>>it;
    }

    sort(a.begin(), a.end());
    int cnt = 0, curnTime = 0;
    for(int i=0;i<n;i++){
        if(curnTime <= a[i]){
            cnt ++;
            curnTime += a[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}