#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int dif1 = a+b;
        int dif2 = c-b;
        if(dif1 == dif2){
            cout<<"2"<<endl;
        }
        else if(dif1 == c or dif2 == a+b){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}