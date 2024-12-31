#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mp;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int cn = mp.size();
    if(cn == 2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}