#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int misha = max((a*3)/10, (a - (a/250)*c));
    int vasya = max((b*3)/10, (b - (b/250)*d));
    if(misha > vasya){
        cout<<"Misha"<<endl;
    }
    else if(misha < vasya){
        cout<<"Vasya"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }
    return 0;
}