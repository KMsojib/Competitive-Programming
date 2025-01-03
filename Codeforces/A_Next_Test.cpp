#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,bool> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]=true;
    }
    int idx = 1;
    while(mp[idx]){
        idx++;
    }
    cout<<idx<<endl;
    return 0;
}