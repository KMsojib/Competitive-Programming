#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int op = 0;
    while(n>0){
        op += 1;
        n/=2;
    }
    printf("%d",op);
    return 0;
}