#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter=0;
    float sum=0;
    for(int i=1;i<=6;i++){
        float x;
        cin>>x;
        if(x>0){
            sum+=x;
            counter++;
        }
    }
    float pos_avg=sum/counter;
    cout<<counter<<" valores positivos"<<endl;
    cout<<fixed;
    cout<<setprecision(1)<<pos_avg<<endl;
    return 0;
 }