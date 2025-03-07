#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int max=0,min=0,sum=0;
    if(x<y){
        min=x;
        max=y;
    }
    else{
        max=y;
        min=x;
    }
    for(int i=(min+1);i<max;i++){
        if(i%2!=0){ 
        sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}