#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll sum = 0;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            sum += i*j;
        }
    }
    ll cn_x = 0;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(i*j == n){
                cn_x++;
            }
        }
    }
    cn_x*=n;
    cout<<sum-cn_x<<endl;
    return 0;
}