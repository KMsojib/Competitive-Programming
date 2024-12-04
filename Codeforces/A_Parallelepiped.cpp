#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum = (sqrt(a*b/c) + sqrt(a*c/b) + sqrt(b*c/a));
    cout<<sum*4<<endl;
}