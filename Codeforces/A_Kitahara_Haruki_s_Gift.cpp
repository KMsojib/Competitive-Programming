#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cn100 = 0, cn200 = 0;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        x == 100? cn100++ : cn200++;
    }
    bool ok = false;
    long long sum = cn100 * 100 + cn200 * 200;
    if(sum%200 != 0){
        cout<<"NO"<<endl;
    }
    else{
        long long half = sum / 2;
        for(int i=0; i<=cn200; i++){
            if(200 * i <= half && half - 200 * i <= 100 * cn100){
                ok = true;
                break;
            }
        }
        cout<<(ok == true? "YES":"NO")<<endl;
    }
    return 0;
}