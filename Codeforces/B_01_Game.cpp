#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test --){
        string s;
        cin>>s;

        int cnt1 = 0, cnt0 = 0;
        for(auto x : s){
            (x == '1') ? cnt1 += 1 : cnt0 += 1;
        }
        if(min(cnt1,cnt0) % 2 == 0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
    }
    return 0;
}