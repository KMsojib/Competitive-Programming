#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(4);
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=2;i<4;i++){
        if(arr[i-2] + arr[i-1] > arr[i]){
            cout<<"TRIANGLE"<<endl;
            return 0;
        }
    }
    for(int i=2;i<4;i++){
        if(arr[i-2] + arr[i-1] == arr[i]){
            cout<<"SEGMENT"<<endl;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}