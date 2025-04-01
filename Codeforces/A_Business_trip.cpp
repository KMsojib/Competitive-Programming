#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int a[12];
    for(int i=0;i<12;i++){
        cin>>a[i];
    }

    sort(a,a+12,greater<int>());
    int cnt = 0, sum = 0;
    for(auto x : a){
        sum += x;
        if(sum >= k){
            cnt += 1;
            break;
        }
        cnt += 1;
    }
    if(sum < k){
        cout<<-1<<endl;
    }
    else{
        if(k == 0){
            cout<<0<<endl;
        }
        else{
            cout<<cnt<<endl;
        }
    }
    return 0;
}