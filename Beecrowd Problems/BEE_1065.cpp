#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter=0;
    for(int i=1;i<=5;i++){
        int n;
        cin>>n;
        if(n%2==0){
            counter++;
        }
    }
    cout<<counter<<" valores pares"<<endl;
    return 0;
}