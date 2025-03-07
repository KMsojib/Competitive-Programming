#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int i=1;
    while(i<=6){
        if(x%2!=0){
            cout<<x<<endl;
            i++;
        }
        x++;
    }
    return 0;
}