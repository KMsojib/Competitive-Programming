#include<bits/stdc++.h>
using namespace std;
int main()
{
     float n;
     int counter=0;
     for(int i=1;i<=6;i++){
        cin>>n;
        if(n>0){
            counter++;
        }
     }
    cout<<counter<<" "<<"valores positivos"<<endl;
    return 0;
}